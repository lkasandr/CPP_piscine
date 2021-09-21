#include "mutantstack.hpp"

int main()
{
    MutantStack<int> intStack;

    intStack.push(1);
    intStack.push(15);
    intStack.push(145);
    intStack.push(143534);
    intStack.push(154654754);

    MutantStack<int>::iterator intIterator;
    MutantStack<int>::reverse_iterator intReversIterator;
    
    std::cout << "Deque int: Iterator: " << std::endl;
    intIterator = intStack.begin();
    while(intIterator != intStack.end())
    {
        std::cout << *intIterator << std::endl;
        intIterator++;
    }
    std::cout << "_________________" << std::endl;
    std::cout << "Deque int: Reverse Iterator: " << std::endl;
    intReversIterator = intStack.rbegin();
    while(intReversIterator != intStack.rend())
    {
        std::cout << *intReversIterator << std::endl;
        intReversIterator++;
    }

    MutantStack<int, std::list<int> > listStack;
    for(int i = 50; i < 100; i++)
        listStack.push(i);
    std::cout << "_________________" << std::endl;
    std::cout << "List int: Iterator: " << std::endl;
    
    MutantStack<int, std::list<int> >::iterator listIterator;
    listIterator = listStack.begin();
    while(listIterator != listStack.end())
    {
        std::cout << *listIterator << std::endl;
        listIterator++;
    }
    std::cout << "_________________" << std::endl;
    std::cout << "List int: reverse Iterator: " << std::endl;
    
    MutantStack<int, std::list<int> >::reverse_iterator reverselistIterator;
    reverselistIterator = listStack.rbegin();
    while(reverselistIterator != listStack.rend())
    {
        std::cout << *reverselistIterator << std::endl;
        reverselistIterator++;
    }

    MutantStack<char> charStack;
    charStack.push('q');
    charStack.push('w');
    charStack.push('e');
    charStack.push('r');
    charStack.push('t');
    charStack.push('y');

    MutantStack<char>::const_iterator charIterator;
    MutantStack<char>::const_reverse_iterator charReverseIterator;

    charIterator = charStack.begin();
    charReverseIterator = charStack.rbegin();

    std::cout << "_________________" << std::endl;
    std::cout << "Deque char: Iterator: " << std::endl;
    while(charIterator != charStack.end())
    {
        std::cout << *charIterator << std::endl;
        charIterator++;
    }
    std::cout << "_________________" << std::endl;
    std::cout << "Deque char: reverse Iterator: " << std::endl;
    while(charReverseIterator != charStack.rend())
    {
        std::cout << *charReverseIterator << std::endl;
        charReverseIterator++;
    }
    return 0;
}