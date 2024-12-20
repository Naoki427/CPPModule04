#include "Cat.hpp"

Cat::Cat() : Animal() {
	std::cout << "Cat constructor called" << std::endl;
	_type = "cat";
}
Cat::Cat(const Cat &origin) : Animal( origin )  {
	std::cout << "Cat copy constructor called" << std::endl;
	*this = origin;
}
Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
}
Cat& Cat::operator= (const Cat &origin){
	std::cout << "Cat copy assignment operator called" << std::endl;
	if(this == &origin)
		return *this;
	_type = origin.getType();
	return *this;
}

void Cat::makeSound() const {
	std::cout << _type <<  ": Meow" << std::endl;
}