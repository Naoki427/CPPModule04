#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"

class Dog : public Animal
{
private:
	
public:
	Dog();
	Dog(const Dog &origin);
	~Dog();
	Dog& operator = (const Dog &origin);
	virtual void makeSound() const;
};

#endif