#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
meta->makeSound();
const WrongAnimal* wrongmeta = new WrongAnimal();
const WrongAnimal* k = new WrongCat();
wrongmeta->makeSound();
k->makeSound();
delete meta;
delete j;
delete i;
delete k;
delete wrongmeta;
return 0;
}