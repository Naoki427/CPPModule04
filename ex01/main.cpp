#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	Animal *animal_arr[10];

	for(int i = 0; i < 5;i++)
	{
		animal_arr[i] = new Dog();
	}
	for(int i = 5; i < 10;i++)
	{
		animal_arr[i] = new Cat();
	}

	std::cout << std::endl;

	for(int i = 0; i < 10;i++)
	{
		animal_arr[i]->makeSound();
	}

	std::cout << std::endl;

	for(int i = 0; i < 10;i++)
	{
		delete animal_arr[i];
	}

	std::cout << std::endl;

	Cat *basic_cat = new Cat();
	basic_cat->setIdea(0,"I'm sleepy");
	Cat *copy_cat = new Cat();
	*copy_cat = *basic_cat;
	delete basic_cat;
	std::cout << copy_cat->getIdea(0) << std::endl;
	delete copy_cat;

	std::cout << std::endl;

	Dog *basic_dog = new Dog();
	basic_dog->setIdea(0,"I'm humgry");
	Dog *copy_dog = new Dog();
	*copy_dog = *basic_dog;
	delete basic_dog;
	std::cout << copy_dog->getIdea(0) << std::endl;
	delete copy_dog;
	
	return 0;
}