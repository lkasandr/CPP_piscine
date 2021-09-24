#include "span.hpp"

Span::Span(void)
{
    this->N = 0;
}

Span::Span(unsigned int N) : N(N)
{
    
}
Span::Span(const Span& copy)
{
    *this = copy;
}

Span& Span::operator=(const Span& span)
{
    if (this == &span)
        return *this;
    this->N = span.N;
    this->array = span.array;
    return (*this);
}

Span::~Span(void)
{

}

const char* Span::arrayException::what() const throw()
{
    return "span exception.";
}

void Span::addNumber(int number)
{
    if (this->array.size() >= this->N)
        throw arrayException();
    this->array.push_back(number);
}

int Span::getSpan(int c)
{
    return this->array[c];
};

void Span::addNumber(int number, unsigned int count)
{
    std::vector<int>::iterator iter;

    if (this->array.size() + count >= this->N)
        throw arrayException();
    else
    {
        iter = this->array.end();
        this->array.insert(iter, count, number);
    }
}

int Span::shortestSpan()
{
    int min = 0;
    int min2 = 0;
    int shortSpan = 0;
    std::vector<int> tmp = this->array;

    if (this->array.size() == 0 || this->array.size() == 1)
        throw arrayException();
    std::cout << this->array[1] << std::endl;
    std::sort(tmp.begin(), tmp.end());
    min = tmp[0];
    min2 = tmp[1];
    std::cout << tmp[0] << std::endl;
    std::cout << this->array[1] << std::endl;
    std::cout << tmp[1] << std::endl;
    shortSpan = min2 - min;
    return shortSpan;
}

int Span::longestSpan()
{
    int min;
    int max;
    int longestSpan;

    if (this->array.size() == 0 || this->array.size() == 1)
        throw arrayException();
    min = *std::min_element(this->array.begin(), this->array.end());
    max = *std::max_element(this->array.begin(), this->array.end());
    longestSpan = max - min;
    return longestSpan;
}