#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
private:
	std::string _ideas[100];
public:
	Brain();
	Brain(const Brain &origin);
	virtual ~Brain();
	Brain& operator = (const Brain &origin);
	const std::string getIdea(int i) const;
	const std::string *getIdeaAddress(int i) const;
	void setIdea(int i,std::string idea);
};

#endif