#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <iostream>

class Span
{
    private:
        unsigned int N;
        std::vector<int> array;
    
    public:
        Span(void);
        Span(unsigned int N);
        Span(const Span& copy);
        Span& operator=(const Span& span);
        ~Span(void);
        void addNumber(int number);
        void addNumber(int number, unsigned int count);
        int shortestSpan();
        int longestSpan();
        class arrayException : public std::exception
        {
            public:
                const char* what() const throw();
        };
};

#endif