#include "Cat.hpp"

Cat::Cat() : Animal() {
	std::cout << "Cat constructor called" << std::endl;
	_type = "cat";
	_brain = new Brain();
}
Cat::Cat(const Cat &origin) : Animal(origin)  {
	std::cout << "Cat copy constructor called" << std::endl;
	*this = origin;
}
Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
	delete _brain;
}
Cat& Cat::operator= (const Cat &origin){
	std::cout << "Cat copy assignment operator called" << std::endl;
	if(this == &origin)
		return *this;
	_type = origin.getType();
	delete _brain;
	_brain = new Brain();
	*this->_brain = *origin._brain;
	return *this;
}

void Cat::makeSound() const {
	std::cout << _type <<  ": Meow" << std::endl;
}

const std::string Cat::getIdea(int i) const {
	return _brain->getIdea(i);
}

void Cat::setIdea(int i,std::string idea) {
	_brain->setIdea(i, idea);
}