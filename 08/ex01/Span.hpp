#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
    public :
        Span();
        Span(unsigned int N);
        Span(const Span &other);
        ~Span();
        unsigned int    size();
        Span    &operator=(const Span &s);
        void addNumber(int n);
        unsigned int shortestSpan();
        unsigned int longestSpan();

        class AddNumberFailException : public std::exception
        {
            const char * what() const throw();
        };

        class SpanException : public std::exception
        {
            const char *what() const throw();
        };

    private :
        std::vector<int>    m_vector;
        unsigned int        m_size;
};


#endif