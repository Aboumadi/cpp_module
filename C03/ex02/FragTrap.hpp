#pragma once
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

public:

	FragTrap();
	FragTrap(std::string const& name);
	FragTrap(FragTrap const &scavTrap);
	~FragTrap();
	FragTrap &operator=(FragTrap const &other);
	void     attack(std::string const & target);
	void     highFivesGuys(void);
};
