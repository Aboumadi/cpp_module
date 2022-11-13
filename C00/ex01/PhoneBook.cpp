/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumadi <aboumadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 15:23:02 by aboumadi          #+#    #+#             */
/*   Updated: 2022/11/06 15:23:02 by aboumadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->index = 0;
	std::cout << "****----My Awesome PhoneBook----****" << std::endl;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << std::endl << "Programme is finish" << std::endl;
}

void	PhoneBook::adding(void)
{
	std::string	str;

	str = "";
	if (PhoneBook::index > 7)
		std::cout << "Warning: overwriting info about " << PhoneBook::contacts[PhoneBook::index % 8].get_first_name() << std::endl;
	while (!std::cin.eof() && str == "\0")
	{
		std::cout << "Set first name: ";
		if (std::getline(std::cin, str) && str != "\0")
			PhoneBook::contacts[PhoneBook::index % 8].set_first_name(str);
	}
	str = "";
	while (!std::cin.eof() && str == "\0")
	{
		std::cout << "Set " << PhoneBook::contacts[PhoneBook::index % 8].get_first_name() << " last name: ";
		if (std::getline(std::cin, str) && str != "\0")
			PhoneBook::contacts[PhoneBook::index % 8].set_last_name(str);
	}
	str = "";
	while (!std::cin.eof() && str == "\0")
	{
		std::cout << "Set " << PhoneBook::contacts[PhoneBook::index % 8].get_first_name() << " nick_name: "; 
		if (std::getline(std::cin, str) && str != "\0")
			PhoneBook::contacts[PhoneBook::index % 8].set_nick_name(str);
	}
	str = "";
	while (!std::cin.eof() && str == "\0")
	{
		std::cout << "Set " << PhoneBook::contacts[PhoneBook::index % 8].get_first_name() << " phone number: ";
		if (std::getline(std::cin, str) && str != "\0")
			PhoneBook::contacts[PhoneBook::index % 8].set_phone_num(str);
	}
	str = "";
	while (!std::cin.eof() && str == "\0")
	{
		std::cout << "Set " << PhoneBook::contacts[PhoneBook::index % 8].get_first_name() << " darkest secret: ";
		if (std::getline(std::cin, str) && str != "\0")
		{
			PhoneBook::contacts[PhoneBook::index % 8].set_secret(str);
			std::cout << "Success operation of :" << PhoneBook::contacts[PhoneBook::index %8].get_first_name() << std::endl;
		}
	}
	this->index++;
}

void	PhoneBook::print(Contact contact, char index)
{
	std::cout << std::endl << "printing information of index :" << index << std::endl;
	if (!contact.get_first_name().size())
	{
		std::cout << "error contact" << std::endl;
		return ;
	}
	std::cout << "First Name: " << contact.get_first_name() << std::endl;
	std::cout << "Last Name: " << contact.get_last_name() << std::endl;
	std::cout << "nick_name: " << contact.get_nick_name() << std::endl;
	std::cout << "Phone Number: " << contact.get_phone_num() << std::endl;
	std::cout << "Darkest Secret: " << contact.get_secret() << std::endl;
}

void	PhoneBook::searching(void)
{
	std::string	str;

	if (PhoneBook::index == 0)
	{
		std::cout << "*********************************************" << std::endl;
		std::cout << "*  Index   |First Name| Last Name| nick_name*" << std::endl;
		std::cout << "*----------|----------|----------|----------*" << std::endl;
		std::cout << "*********************************************" << std::endl;
		std::cout << "PhoneBook is empty!!!!" << std::endl;
		return ;
	}
	if (PhoneBook::index > 0)
		search_index(PhoneBook::contacts);
	while (!std::cin.eof())
	{
		std::cout << "Select an index: ";
		if (std::getline(std::cin, str) && str != "")
		{
			if (str.size() == 1 && str[0] >= '1' && str[0] <= '8' && \
					this->contacts[str[0] - 1 - '0'].get_first_name().size())
				break ;
		}
		if ((str[0] <= 0 && str[0] > 8) || str.size()== 2 || str != "")
			std::cout << "This index id invalid" << std::endl;
	}
	if (!std::cin.eof())
		this->print(this->contacts[str[0] - 1 - '0'], str[0]);
}

// fonction utils out of class
std::string	Spaces(int n)
{
	std::string	str;

	while (n--)
		str.append(" ");
	return (str);
}

std::string	Get_value(std::string str, long unsigned max)
{
	if (str.size() > max)
	{
		str.resize(max);
		str[str.size() - 1] = '.';
	}
	return (str);
}

void	search_index(Contact contacts[8])
{
	char		c;
	std::string	str;

	std::cout << "*********************************************" << std::endl;
	std::cout << "*  Index   |First Name| Last Name| nick_name*" << std::endl;
	std::cout << "*----------|----------|----------|----------*" << std::endl;
	c = '1';
	while (c <= '8')
	{
		if (contacts[c - 1 - '0'].get_first_name().size())
		{
			str = c;
			std::cout << "*" << Spaces(10 - str.size()) << str;
			str = Get_value(contacts[c - 1  - '0'].get_first_name(), 10);
			std::cout << "|" << Spaces(10 - str.size()) << str;
			str = Get_value(contacts[c - 1 - '0'].get_last_name(), 10);
			std::cout << "|" << Spaces(10 - str.size()) << str;
			str = Get_value(contacts[c - 1 - '0'].get_nick_name(), 10);
			std::cout << "|" << Spaces(10 - str.size()) << str;
			std::cout << "*" << std::endl;
		}
		c++;
	}
	std::cout << "*********************************************" << std::endl;
}