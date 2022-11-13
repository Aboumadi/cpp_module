#include "Zombie.hpp"

Zombie::Zombie(std::string str)
{
    this->name = str;
    std::cout << "Zombie " << this->name << " was created" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Zombie " << this->name << " was desytroyed" << std::endl;
}

void    Zombie::announce()
{
    std::cout << this->name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}