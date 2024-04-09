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
    m_vector.reserve(N);
}

Span::Span(const Span &other) : m_vector(other.m_vector), m_size(other.m_size)
{

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

unsigned int    Span::size()
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

unsigned int Span::longestSpan()
{
    if (this->m_size <= 1)
        throw(Span::SpanException());
    return (*std::max_element(m_vector.begin(), m_vector.end()) - *std::min_element(m_vector.begin(), m_vector.end()));
}

unsigned int Span::shortestSpan()
{
    if (this->m_size <= 1)
        throw(Span::SpanException());
    
}