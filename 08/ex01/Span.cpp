#include "Span.hpp"

const char* Span::AddNumberFailException::what() const throw()
{
    return ("add number fail");
}

const char* Span::SpanException::what() const throw ()
{
    return ("span fail");
}

Span::Span() : m_vector(0,0), m_size(0)
{
    std::cout << "constructor Span" << std::endl;
}

Span::Span(unsigned int N) : m_vector(0,0), m_size(N)
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
    return (m_size);
}

Span::~Span() 
{
    std::cout << "destructor Span" << std::endl;
}

void Span::addNumber(int n)
{
    try
    {
        if (this->m_vector.size() == this->m_size)
            throw(Span::AddNumberFailException());
        this->m_vector.push_back(n);
    }
    catch(const Span::AddNumberFailException& e)
    {
        std::cout << e.what() << std::endl;
    }
}

unsigned int Span::longestSpan() const
{
    try
    {
        if (this->m_size <= 1)
            throw(Span::SpanException());
        return (*std::max_element(m_vector.begin(), m_vector.end()) - *std::min_element(m_vector.begin(), m_vector.end()));
    }
    catch(const Span::SpanException &e)
    {
        std::cout << e.what() << std::endl;
        return 0;
    }
}

unsigned int Span::shortestSpan() const
{
    try
    {
        if (this->m_size <= 1)
            throw Span::SpanException();
        
        std::vector<int> temp = this->m_vector;
        std::sort(temp.begin(), temp.end());
        unsigned int ret = 0;
        
        for (size_t i = 1; i < temp.size(); ++i)
        {
            unsigned int diff = static_cast<unsigned int>(temp[i] - temp[i - 1]);
            if (ret == 0 || diff < ret)
            {
                ret = diff;
            }
        }
        return ret;
    }
    catch(const Span::SpanException& e)
    {
        std::cout << e.what() << std::endl;
        return 0;
    }
}
