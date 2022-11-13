#include "Zombie.hpp"

Zombie*	ZombieHorde(int N, std::string name)
{
	if (N <= 0)
		return NULL;
	Zombie *horde = new Zombie[N];
	for (int i = 0; i < N; i++)
		horde[i].set_name(name);
		//horde[i] = Zombie(name);
	return (horde);
}