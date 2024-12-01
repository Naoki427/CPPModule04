#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain constructor called" << std::endl;
}
Brain::Brain(const Brain &origin) {
	std::cout << "Brain copy constructor called" << std::endl;
	*this = origin;
}
Brain::~Brain() {
	std::cout << "Brain destructor called" << std::endl;
}
Brain& Brain::operator= (const Brain &origin){
	std::cout << "Brain copy assignment operator called" << std::endl;
	if(this == &origin)
		return *this;
	for(int i = 0; i < 100; i++)
	{
		_ideas[i] = origin.getIdea(i);
	}
	return *this;
}

const std::string Brain::getIdea(int i) const {
	if (i < 100)
		return _ideas[i];
	else
		return ("Nothing");
}

const std::string * Brain::getIdeaAddress(int i) const {
	if (i < 100)
		return &_ideas[i];
	else
		return NULL;
}

void Brain::setIdea(int i,std::string idea) {
	if ( i < 100)
		_ideas[i] = idea;
}