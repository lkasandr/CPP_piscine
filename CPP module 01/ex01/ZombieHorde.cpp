#include "Zombie.hpp"

Zombie * zombieHorde (int N, std :: string name)
{
	int index;

	index = 0;
	Zombie *zombies = new Zombie[N];
	while(index < N)
	{
		zombies[index].setName(name);
		index++;
	}
	return (zombies);
}