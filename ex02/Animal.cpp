#include "Animal.hpp"

Animal::Animal() : _type("default") {
	std::cout << "Animal constructor called" << std::endl;
}
Animal::Animal(const Animal &origin) : _type(origin.getType()) {
	std::cout << "Animal copy constructor called" << std::endl;
	*this = origin;
}
Animal::~Animal() {
	std::cout << "Animal destructor called" << std::endl;
}
Animal& Animal::operator= (const Animal &origin){
	std::cout << "Animal copy assignment operator called" << std::endl;
	if(this == &origin)
		return *this;
	_type = origin.getType();
	return *this;
}
std::string Animal::getType() const{
	return _type;
}
void Animal::makeSound() const{
		std::cout << _type <<  ": ..." << std::endl;

}