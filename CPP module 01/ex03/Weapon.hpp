#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon {
	private:
		std::string weapon_type;
	public:
		Weapon();
		Weapon(std::string weapon_type);
		void setType(std::string weapon_type);
		std::string getType() const;
};

#endif