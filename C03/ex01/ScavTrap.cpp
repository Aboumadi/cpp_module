#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap constructor caaled" << std::endl;
}
ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name) {
	std::cout << "ScavTrap parametraize constructor called" << std::endl;
	this->Hp = 100;
    this->Energy_points = 50;
    this->Damage = 20;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy) {
    std::cout << "ScavTrap copy constructor called" << std::endl;
    Hp =  copy.Hp;
    Energy_points = copy.Energy_points;
    Damage = copy.Damage;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other) {
    if (this != &other) {
        std::cout << "ScavTrap operator constructor called" << std::endl;
        Hp =  other.Hp;
        Energy_points = other.Energy_points;
        Damage = other.Damage;
    }
    return *this;
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->Energy_points && this->Hp > 0)
	{
		std::cout << "ScavTrap " << this->Name << " attacked " << target << ", causing " << this->Damage << " point(s) of damage!" << std::endl;
		this->Energy_points--;
	}
	if (this->Hp <= 0)
		std::cout << "ScavTrap " << this->Name << " no Hit points" << std::endl;
	else if (!this->Energy_points)
		std::cout << "ScavTrap " << this->Name << " no Energy points!" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	if (this->Hp <= 0)
		std::cout << "Can't acces to mode Gat keeper because: ClapTrap " << this->Name << " has no hits points " << std::endl;
	else
		std::cout << "Congratulation " << this->Name << " you can acces to mode: Gat keeper." << std::endl;
}
