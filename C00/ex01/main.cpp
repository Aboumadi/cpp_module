/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumadi <aboumadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 00:26:30 by aboumadi          #+#    #+#             */
/*   Updated: 2022/11/06 00:28:16 by aboumadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook 	phone;
	std::string	cmd;
	bool		in_progress = true;

	while (in_progress)
	{
		std::cout << "ADD command {ADD, SEARCH, EXIT} : ";
		std::getline(std::cin, cmd);
		if (cmd == "ADD")
			phone.adding();
		if (cmd == "SEARCH")
			phone.searching();
		if ((std::cin.eof()) || (cmd == "EXIT"))
			in_progress = false;
	}
	return (0);
}