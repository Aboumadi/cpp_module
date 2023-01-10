
#include "ClapTrap.hpp"
ClapTrap::ClapTrap(): Name(""), Hp(10), Energy_points(10), Damage(0)
{
	std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string const &name): Name(name), Hp(10), Energy_points(10), Damage(0)
{
    std::cout << "ClapTrap constructor parameterize called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &copy)
{
    std::cout << "ClapTrap copy constructor" << std::endl;
	*this = copy;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "Assignment operator for ClapTrap called." << std::endl;
	this->Name = other.Name;
	this->Hp = other.Hp;
	this->Energy_points = other.Energy_points;
	this->Damage = other.Damage;
	return (*this);
}

void	ClapTrap::attack(std::string const &target)
{
	if (this->Energy_points && this->Hp > 0)
	{
		std::cout << "ClapTrap " << this->Name << " attacked " << target << ", causing " << this->Damage << " point(s) of damage!" << std::endl;
		this->Energy_points--;
	}
	if (this->Hp <= 0)
		std::cout << "ClapTrap " << this->Name << " no Hit points" << std::endl;
	else if (!this->Energy_points)
		std::cout << "ClapTrap " << this->Name << " no Energy points!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->Hp > 0 && this->Energy_points)
	{
		std::cout << "ClapTrap " << this->Name << " lose " << amount << " points of Hit points!" << std::endl;
		this->Hp -= amount;
	}
	if (this->Hp > 0 && !this->Energy_points)
	{
		std::cout << "ClapTrap " << this->Name << " is out because no Energy points" << std::endl;
		this->Hp = 0;
	}
	if (this->Hp < 0 && this->Energy_points)
	{
		std::cout << "ClapTrap " << this->Name << " is out because no Hit points" << std::endl;
		this->Energy_points = 0;
	}
	if (this->Hp < 0)
		this->Hp = 0;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->Hp > 0 && this->Energy_points)
	{
		std::cout << "ClapTrap " << this->Name << " earn " << amount << " point(s)." << std::endl;
		this->Hp += amount;
		this->Energy_points--;
	}
	if (this->Hp <= 0)
		std::cout << "ClapTrap " << this->Name << " Can't repair because no Hit points " << std::endl;
	else if (!this->Energy_points)
		std::cout << "ClapTrap " << this->Name << " is out because no Energy points" << std::endl;
}

int const	&ClapTrap::get_hp(void) const
{
	return (this->Hp);
}

void	ClapTrap::set_hp(int const &Other_hp)
{
	this->Hp = Other_hp;
}
