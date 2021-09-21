#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <vector>
#include <list>

template <typename T, class Container = std::deque<T> >
class MutantStack : public std::stack<T>
{
    public:
        MutantStack() : std::stack<T>() 
        {};
        MutantStack(const MutantStack<T> &copy) : std::stack<T>(copy) 
        {};
        MutantStack& operator=(const MutantStack<T> &stack)
        {
            if (this == &stack)
                return *this;
            this->c = stack.c;
            return *this;
        };
        virtual ~MutantStack() 
        {};
        typedef typename std::stack<T>::container_type::iterator iterator;
        typedef typename std::stack<T>::container_type::const_iterator const_iterator;
        typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
        typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
        
        iterator begin() 
        {
            return this->c.begin();
        };

        iterator end() 
        {
            return this->c.end();
        };

        const_iterator begin() const 
        {
            return this->c.begin();
        };
        const_iterator end() const
        {
            return this->c.end();
        };

        reverse_iterator rbegin() 
        {
            return this->c.rbegin();
        };

        reverse_iterator rend() 
        {
            return this->c.rend();
        };

        const_reverse_iterator rbegin() const
        {
            return this->c.rbegin();
        };

        const_reverse_iterator rend() const
        {
            return this->c.rend();
        };
};

#endif