#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA{
	private:
		std::string name;
		Weapon &weapon_type;
	public:
		HumanA(std::string name, Weapon &weapon_type);
		void attack();
};

#endif