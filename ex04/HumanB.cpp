#include "HumanB.hpp"

HumanB::HumanB(std::string str): name(str), p_weapon(NULL)
{
    std::cout << "HumanB " << this->name << " is created by constructor of HumanB" << std::endl;
}

HumanB::~HumanB()
{
    std::cout << "HumanB " << this->name << " is destroyed" << std::endl;
}

void    HumanB::attack()
{
    std::cout << this->name << " attack with " << HumanB::p_weapon->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon &s_weapon)
{
    this->p_weapon = &s_weapon;
}