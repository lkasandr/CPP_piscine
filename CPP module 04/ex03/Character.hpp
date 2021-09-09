#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <iostream>

class Character : public ICharacter
{
	private:
		AMateria* equipedArray[4];
		std::string name;
	
	public:
		Character();
		Character(std::string name);
		Character(const Character &player);
		Character& operator=(const Character &player);
		~Character();
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif
