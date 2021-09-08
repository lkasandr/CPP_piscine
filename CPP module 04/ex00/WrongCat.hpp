#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	protected:
	std::string type;

	public:
	WrongCat();
	WrongCat(const WrongCat &cat);
	WrongCat& operator=(const WrongCat &cat);
	~WrongCat();
	void makeSound(void) const;
};

#endif