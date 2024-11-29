#include "Dog.hpp"

Dog::Dog() : Animal() {
	std::cout << "Dog constructor called" << std::endl;
	_type = "dog";
}
Dog::Dog(const Dog &origin) : Animal()  {
	std::cout << "Dog copy constructor called" << std::endl;
	_type = origin.getType();
}
Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;
}
Dog& Dog::operator= (const Dog &origin){
	std::cout << "Dog copy assignment operator called" << std::endl;
	_type = origin.getType();
	return *this;
}

void Dog::makeSound() const {
	std::cout << _type <<  ": Woof!" << std::endl;
}