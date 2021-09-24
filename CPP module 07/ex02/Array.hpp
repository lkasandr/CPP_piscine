#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <class T>
class Array
{
    private:
        T* data;
        unsigned int n;
    
    public:
        Array(void) : data(NULL), n(0) {};

        Array(unsigned int n) : n(n)
        {
            this->data = new T[n];
        };

        Array(const Array<T> &copy)
        {
            this->data = NULL;
            *this = copy;
        };

        Array& operator=(const Array<T> &copy)
        {
            if (this == &copy)
                return *this;
            this->n = copy.n;
            if (this->data)
                delete [] this->data;
            this->data = new T[this->n];
            for (unsigned int i = 0; i < this->n; i++)
                this->data[i] = copy.data[i];
            return *this;
        };

        class indexException : public std::exception
        {
            public:
			    const char* what() const throw()
                {
                    return "wrong index!";
                }
        };

        T& operator[](unsigned int n)
        {
            if (n >= this->n || n < 0)
                throw indexException();
            else
                return (this->data[n]);
        };

        const T &operator[](unsigned int n) const 
        {
            if (n >= this->n || n < 0)
                throw indexException();
            else
                return (this->data[n]);
        };

        ~Array(void)
        {
            if (this->data)
                delete [] this->data;
            this->data = NULL;
        };

        unsigned int size() const
        { 
            return this->n;
        };
        
};

#endif