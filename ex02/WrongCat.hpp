#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
#include "WrongAnimal.hpp"

class WrongCat :public WrongAnimal
{
private:
	
public:
	WrongCat();
	WrongCat(const WrongCat &origin);
	~WrongCat();
	WrongCat& operator = (const WrongCat &origin);
	void makeSound() const;
};

#endif