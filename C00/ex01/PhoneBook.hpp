/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumadi <aboumadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 00:26:44 by aboumadi          #+#    #+#             */
/*   Updated: 2022/11/06 15:23:12 by aboumadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PhoneBook_HPP

# define PhoneBook_HPP

#include "Contact.hpp"

class	PhoneBook
{
	private:
		Contact	contacts[8];
		int		index;
	public:
		PhoneBook();
		void	adding(void);
		void	searching(void);
		void	print(Contact contact, char str);
		~PhoneBook();
};

std::string	Spaces(int n);
std::string	Get_value(std::string str, long unsigned max);
void		search_index(Contact contacts[8]);

#endif
