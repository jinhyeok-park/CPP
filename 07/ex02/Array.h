#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
template<typename T>
class Array
{
private :
    T *m_Arr;
    unsigned int m_Size;
public :
    Array(void);
    ~Array(void);
    Array(unsigned int n);
    Array(const Array<T>& other);
    const Array<T> &operator=(const Array<T>& other);
    T& operator[](unsigned int i);
    const T& operator[](unsigned int i) const;
    T size(void);
    class OutOfRange : public std::exception 
    {
        public :
            const char *what() const throw()
            {
                return "index out of range";
            };
    };
};

template<typename T>
T&   Array<T>::operator[](unsigned int i)
{
    if (i < 0 || m_Size <= i)
    {
        throw Array::OutOfRange();
    }
    return m_Arr[i];
}

template<typename T>
const T&   Array<T>::operator[](unsigned int i) const
{
    std::cout << "cons call" << std::endl;
    if (i < 0 || m_Size <= i)
    {
        throw Array::OutOfRange();
    }
    return m_Arr[i];
}

template<typename T>
Array<T>::Array(void) : m_Arr(0), m_Size(0) {};

template<typename T>
Array<T>::~Array(void)
{
    delete[] (m_Arr);
};

template<typename T>
Array<T>::Array(unsigned int n) : m_Size(n)
{
    m_Arr = new T[n];
}

template<typename T>
Array<T>::Array(const Array<T>& other)
{
    m_Size = other.m_Size;
    m_Arr = new T[other.m_Size];

    for (unsigned int i = 0; i < other.m_Size ; i++)
    {
        m_Arr[i] = other.m_Arr[i];
    }
}

template<typename T>
const Array<T> &Array<T>::operator=(const Array<T>& other)
{
    if (this != &other)
    {
        delete[] m_Arr;
        m_Arr = new T[other.m_Size];
        for (unsigned int i = 0 ; i < other.m_Size; i++)
        {
            m_Arr[i] = other.m_Arr[i];
        }
        m_Size = other.m_Size;
    }
    return *this;
}

template<typename T>
T Array<T>::size(void)
{
    return m_Size;
}

#endif