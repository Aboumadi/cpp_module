#pragma once
#include <iostream>

class Brain
{
public:
    //Constrortors and destructors
    Brain();
    ~Brain();
    std::string ideas[100];
    Brain (const Brain &copy);
    Brain const &operator=(const Brain &other);

    //Getters and Setters
    //std::string const	&getIdea(int const &index) const;
	//void				setIdea();
};
