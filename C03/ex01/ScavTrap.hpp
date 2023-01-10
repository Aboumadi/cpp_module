#pragma once
#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap {

public:

    ScavTrap();
    ScavTrap(std::string const& name);
    ScavTrap(ScavTrap const &copy);
    ~ScavTrap();
    ScavTrap &operator=(ScavTrap const &other);
	void    attack(std::string const &target);
	void guardGate();
};
