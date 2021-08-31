#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>

class Zombie{
	private:
		std::string name;
	public:
		void announce( void );
		~Zombie(void);
		void setName(std::string name);
};

Zombie * zombieHorde (int N, std :: string name);

#endif