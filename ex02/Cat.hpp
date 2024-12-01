#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain *_brain;
public:
	Cat();
	Cat(const Cat &origin);
	~Cat();
	Cat& operator = (const Cat &origin);
	virtual void makeSound() const;
	const std::string getIdea(int i) const;
	void setIdea(int i,std::string idea);
};

#endif