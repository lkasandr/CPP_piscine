#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
	protected:
		std::string type;
	public:
		Dog(void);
		Dog(const Dog &dog);
		Dog& operator=(const Dog &dog);
		~Dog(void);
		virtual void makeSound(void) const;
};

#endif