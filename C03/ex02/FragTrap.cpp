# include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap Default constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string &name): ClapTrap(name) {
	std::cout << "FragTrap constructor parametrize called" << std::endl;
	Hp =  100;
	Energy_points = 100;
	Damage = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	Hp =  other.Hp;
	Energy_points = other.Energy_points;
	Damage = other.Damage;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
		std::cout << "FragTrap Assignment operator called" << std::endl;
		Hp =  other.Hp;
		Energy_points = other.Energy_points;
		Damage = other.Damage;
	return *this;
}

void	FragTrap::attack(std::string const &target)
{
	if (this->Energy_points && this->Hp > 0)
	{
		std::cout << "FragTrap " << this->Name << " attacked " << target << ", causing " << this->Damage << " point(s) of damage!" << std::endl;
		this->Energy_points--;
	}
	if (this->Hp <= 0)
		std::cout << "FragTrap " << this->Name << " no Hit points" << std::endl;
	else if (!this->Energy_points)
		std::cout << "ClapFragTrapTrap " << this->Name << " no Energy points!" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
		std::cout << "give me highfive ✋" << std::endl;
}
