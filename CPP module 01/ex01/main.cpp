#include "Zombie.hpp"

int main(int argc, char *argv[])
{
	int N;
	int index;
	Zombie *zombie;

	index = 0;
	if (argc != 3)
	{
		std::cout << "Wrong number of arguments!" << std::endl;
		return (-1);
	}
	N = std::atoi(argv[1]);
	zombie = zombieHorde(N, argv[2]);
	while(index < N)
	{
		zombie[index].announce();
		index++;
	}
	delete [] zombie;
}