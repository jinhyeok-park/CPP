#include "Span.hpp"

const char* Span::AddNumberFailException::what() const throw()
{
    return ("add number fail");
}

const char* Span::SpanException::what() const throw ()
{
    return ("span fail");
}

Span::Span() : m_vector(0, 0), m_size(0)
{
    std::cout << "constructor Span" << std::endl;
}

Span::Span(unsigned int N) : m_vector(0, 0), m_size(N)
{
    std::cout << "constructor Span" << std::endl;
}

Span::Span(const Span &other)
{
    this->m_vector = other.m_vector;
    this->m_size = other.m_size;
}

Span    &Span::operator=(const Span &other)
{
    if (this != &other)
    {
        this->m_vector = other.m_vector;
        this->m_size = other.m_size;
    }
    return (*this);
}

unsigned int    Span::size() const
{
    return (this->m_size);
}

Span::~Span() 
{
    std::cout << "destructor Span" << std::endl;
}

void Span::addNumber(int n)
{
    if (this->m_vector.size() == this->m_size)
        throw(Span::AddNumberFailException());
    this->m_vector.push_back(n);
}

unsigned int Span::longestSpan() const
{
    if (this->m_size <= 1)
        throw(Span::SpanException());
    return (*std::max_element(m_vector.begin(), m_vector.end()) - *std::min_element(m_vector.begin(), m_vector.end()));
}

unsigned int Span::shortestSpan() const
{
    std::vector<int>    temp;
    unsigned int        ret;

    if (this->m_size <= 1)
        throw(Span::SpanException());
    temp = this->m_vector;
    ret = 0;
    std::sort(temp.begin(), temp.end());

    for (std::vector<int>::iterator iter = temp.begin() + 1; iter != temp.end(); ++iter)
    {
        unsigned int diff = static_cast<unsigned int>(*iter - *(iter - 1));
        if (ret == 0 || diff < ret)
        {
            ret = diff;
        }
    }
    return (ret);
}
