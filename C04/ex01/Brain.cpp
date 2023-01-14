#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain default constructor." << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain destructor." << std::endl;
}

Brain::Brain(Brain const &copy)
{
	*this = copy;
	std::cout << "Brain copy construdtor." << std::endl;
}

Brain const	&Brain::operator=(Brain const &copy)
{
	std::cout << "Brain assignment oprator" << std::endl;
	for(int i = 0; i < 100; ++i)
			ideas[i] = copy.ideas[i];
	return *this;
}

/*std::string const	&Brain::getIdea(int const &index) const
{
	if (index >= 0 && index < 100)
		return (this->ideas[index]);
	return (this->ideas[0]);
}

void	Brain::setIdea()
{
	for (int i = 0; i < 100; i++)
	{
		ideas[i] = "test, ";
	}
}

std::ostream &operator<<(std::ostream &out, const Brain &brain) {
	for(int i = 0; i < 100; ++i) {
		out << brain.ideas[i] << " ,";
	}
	return out;
}*/
