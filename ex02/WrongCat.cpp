#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {
	std::cout << "WrongCat constructor called" << std::endl;
	_type = "Wrongcat";
}
WrongCat::WrongCat(const WrongCat &origin) : WrongAnimal(origin)  {
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = origin;
}
WrongCat::~WrongCat() {
	std::cout << "WrongCat destructor called" << std::endl;
}
WrongCat& WrongCat::operator= (const WrongCat &origin){
	std::cout << "WrongCat copy assignment operator called" << std::endl;
	if(this == &origin)
		return *this;
	_type = origin.getType();
	return *this;
}

void WrongCat::makeSound() const {
	std::cout << _type << " : " << "Meow" << std::endl;
}