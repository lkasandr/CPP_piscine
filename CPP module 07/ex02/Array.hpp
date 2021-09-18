#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <class T>
class Array
{
    private:
        unsigned int lenght;
        T* data;
    
    public:
        Array(void) : lenght(0), data(NULL) {};
        Array(unsigned int lenght) : lenght(lenght)
        {
            this->data = new T[lenght];
        };
        Array(const T &copy)
        {
            *this = copy;
        };
        Array& operator=(const T &copy)
        {
            if (this == &copy)
                return *this;
            this->lenght = copy.lenght;
            if (this->data)
                delete [] this->data;
            this->data = new T[this->lenght];
            for (int i = 0; i < this->lenght; i++)
                this->data[i] = copy[i];
            return *this;
        };
        ~Array(void)
        {
            if (this->data)
                delete [] this->data;
            this->data = NULL;
        };
        
};

#endif