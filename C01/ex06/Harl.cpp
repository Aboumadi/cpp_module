#include "Harl.hpp"

Harl::Harl(void)
{
	//std::cout << "Harl constructor was called" << std::endl;
}

Harl::~Harl(void)
{
	//std::cout << "Harl destructor was called" << std::endl;
}

void	Harl::debug(void)
{
	std::cout << "\001\033[0;32m\002" << "[DEBUG]" << "\001\033[0;39m\002" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger ";
	std::cout << "I really do !" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "\001\033[0;34m\002" << "[INFO]" << "\001\033[0;39m\002" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. " << std::endl;
	std::cout << "You didn’t put enough bacon in my burger ! If you did, ";
	std::cout << "I wouldn’t be asking for more !" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "\001\033[0;31m\002" << "[WARNING]" << "\001\033[0;39m\002" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. " << std::endl;
	std::cout << "I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "\001\033[0;33m\002" << "[ERROR]" << "\001\033[0;39m\002" << std::endl;
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}
void	Harl::other()
{
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}
void Harl::complain( std::string level)
{
	int	i;
	void	(Harl::*f_complain[5])() = {&Harl::other, &Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	i = ((level == "DEBUG") * 1 + (level == "INFO") * 2 + (level == "WARNING") * 3 + (level == "ERROR") * 4);
	switch (i)
	{
	case 1:
		(this->*f_complain[i])();
		i++;
	case 2:
		(this->*f_complain[i])();
		i++;
	case 3:
		(this->*f_complain[i])();
		i++;
	case 4:
		(this->*f_complain[i])();
		break;
	default:
		(this->*f_complain[i])();
		break;
	}
}
