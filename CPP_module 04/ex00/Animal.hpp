#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal{
	public:
		Animal(void);
		Animal(const Animal &animal);
		Animal& operator= (const Animal &animal);
		~Animal(void);
		void makeSound(void);
	protected:
		std::string type;
};

#endif