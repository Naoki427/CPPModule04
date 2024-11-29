#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("wrong_default") {
	std::cout << "WrongAnimal constructor called" << std::endl;
}
WrongAnimal::WrongAnimal(const WrongAnimal &origin) : _type(origin.getType()) {
	std::cout << "WrongAnimal copy constructor called" << std::endl;
}
WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destructor called" << std::endl;
}
WrongAnimal& WrongAnimal::operator= (const WrongAnimal &origin){
	std::cout << "WrongAnimal copy assignment operator called" << std::endl;
	_type = origin.getType();
	return *this;
}
std::string WrongAnimal::getType() const{
	return _type;
}
void WrongAnimal::makeSound() const{
	std::cout << _type << " : ** WrongAnimal noise **" << std::endl;
}