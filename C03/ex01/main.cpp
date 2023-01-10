#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
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
	ScavTrap jhon("Jhon");

	jhon.attack("Lark");

}
