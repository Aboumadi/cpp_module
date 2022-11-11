#include "Zombie.hpp"

int main()
{
    Zombie  *z2;

    z2 = newZombie("Aboumadi");
    z2->announce();
    randomChump("achraf");
    delete z2;
}