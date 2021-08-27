#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB{
	private:
		std::string name;
		Weapon *weapon_type;
	public:
		HumanB(std::string name);
		HumanB(std::string name, Weapon *weapon_type);
		void attack();
		void setWeapon(Weapon &weapon_type);
};

#endif