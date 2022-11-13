/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumadi <aboumadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 00:26:17 by aboumadi          #+#    #+#             */
/*   Updated: 2022/11/06 14:56:26 by aboumadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
	int		i;
	size_t	j;

	i = 1;
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE * " << std::endl;
		return 0;
	}
	while (i < argc)
	{
		std::string s = std::string(argv[i]);
		j = -1;
		while (++j < s.length())
			std::cout << (char)std::toupper(s[j]);
		i++;
	}
	std::cout << std::endl;
	return 0;
}