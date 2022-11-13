#include "Zombie.hpp"

int main()
{
    int	n;

	n = 3;
	Zombie *horde = ZombieHorde(n, "Zom");
	for (int i = 0; i < n; i++)
		horde[i].announce();
	delete [] horde;
}