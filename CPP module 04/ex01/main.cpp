#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	int index = 0;
    
	Animal* animals[4];

	while (index < 2)
	{
		animals[index] = new Dog();
		index++;
	}
	while (index < 4)
	{
		animals[index] = new Cat();
		index++;
	}
	index = 0;
	while (index < 4)
	{
		animals[index]->makeSound();
		index++;
	}

	index = 0;
	while(index < 4)
	{
		delete animals[index];
		index++;
	}
	return 0;
}