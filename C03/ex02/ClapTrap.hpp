#pragma once
# include <iostream>
# include <string>

class ClapTrap
{
	protected:
		std::string	Name;
		int			Hp;
		int			Energy_points;
		int			Damage;
	public:
		/* Constructors & Destructors */
		ClapTrap(void);
		ClapTrap(std::string const &name);
		ClapTrap(ClapTrap const &copy);
		virtual ~ClapTrap(void);
		
		/* Main Member Functions */
		void	attack(std::string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		/* Basic Operators */
		ClapTrap	&operator=(ClapTrap const &other);

		/* Getters & Setters */
		int const			&get_hp(void) const;
		void				set_hp(int const &value);

};
