#include "ClapTrap.hpp"
#include "FragTrap.hpp"
void	bob_rundown(void)
{
	/*while (bob.get_hp())
	{
		bob.takeDamage(2);
		bob.beRepaired(2);
	}
	bob.takeDamage(1);*/
}

int	main(void)
{
	ClapTrap	bob("Bob");
	FragTrap	simo("simo");
	simo.attack("bob");
	simo.highFivesGuys();
}
