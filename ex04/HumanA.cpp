#include "HumanA.hpp"

HumanA::HumanA(std::string str, Weapon &s_weapon): name(str), R_Weapon2(s_weapon)
{
    std::cout << "HumanA " << this->name << " is created with constructor of HumanA" << std::endl;
}

HumanA::~HumanA()
{
    std::cout << "HumanA " << this->name << " is destroyed" << std::endl;
}

void    HumanA::attack()
{
    std::cout << this->name << " attack whith " << HumanA::R_Weapon2.getType() << std::endl;
}