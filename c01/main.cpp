#include "Zombie.hpp"

int main()
{
    //Zombie  z1("Achraf");
    Zombie  *z2;

    //z1.announce();
    z2 = newZombie("Aboumadi");
    z2->announce();
    //z2->~Zombie();
    delete z2;
}