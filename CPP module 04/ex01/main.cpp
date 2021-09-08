#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	int index = 0;
	// const Animal* j = new Dog();
    // const Animal* i = new Cat();
    
	Animal* animals = new Animal[10];

	while (index < 5)
	{
		animals[index] = new Dog();
		index++;
	}
	while (index < 10)
	{
		animals[index] = new Cat();
		index++;
	}
	index = 0;
	while (index < 10)
	{
		animals[index].makeSound();
		index++;
	}


	// delete j;//should not create a leak
	// delete i;
	// delete [] animals;
}