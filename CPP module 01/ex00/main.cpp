#include "Zombie.hpp"

int main(int argc, char *argv[])
{
	Zombie *zombie;
	if (argc != 3)
	{
		std::cout << "Wrong number of arguments!" << std::endl;
		return (-1);
	}
	zombie = newZombie(argv[1]);
	randomChump(argv[2]);
	delete zombie;
	return (0);
}