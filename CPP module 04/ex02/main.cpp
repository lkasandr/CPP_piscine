#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Animal* meta = new Animal();
	Animal animal;
	Dog basic;
	{
		Dog tmp = basic;
	}

	basic.getBrain();

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
}