#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain *_brain;
public:
	Dog();
	Dog(const Dog &origin);
	~Dog();
	Dog& operator = (const Dog &origin);
	virtual void makeSound() const;
	const std::string getIdea(int i) const;
	void setIdea(int i,std::string idea);
};

#endif