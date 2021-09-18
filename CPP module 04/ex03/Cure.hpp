#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
	protected:
	std::string type;

	public:
	Cure();
	Cure(const Cure &cure);
	Cure& operator=(const Cure &cure);
	virtual ~Cure();
	AMateria* clone() const;
	void use(ICharacter& target);
};

#endif