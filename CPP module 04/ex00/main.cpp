#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();

	const Animal* j = new Dog();
	const Animal* i = new Cat();

	const WrongAnimal* beast = new WrongAnimal();
	const WrongAnimal* wrongcat = new WrongCat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	std::cout << wrongcat->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	// meta->makeSound();

	wrongcat->makeSound();
	// beast->makeSound();


	delete meta;
	delete j;
	delete i;

	delete beast;
	delete wrongcat;
	return 0;
}