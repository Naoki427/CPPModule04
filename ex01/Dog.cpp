#include "Dog.hpp"

Dog::Dog() : Animal() {
	std::cout << "Dog constructor called" << std::endl;
	_type = "dog";
	_brain = new Brain();
}
Dog::Dog(const Dog &origin) : Animal(origin)  {
	std::cout << "Dog copy constructor called" << std::endl;
	*this = origin;
}
Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;
	delete _brain;
}
Dog& Dog::operator= (const Dog &origin){
	std::cout << "Dog copy assignment operator called" << std::endl;
	if(this == &origin)
		return *this;
	_type = origin.getType();
	delete _brain;
	_brain = new Brain();
	*this->_brain = *origin._brain;
	return *this;
}

void Dog::makeSound() const {
	std::cout << _type <<  ": Woof!" << std::endl;
}

const std::string Dog::getIdea(int i) const {
	return _brain->getIdea(i);
}

void Dog::setIdea(int i,std::string idea) {
	_brain->setIdea(i, idea);
}