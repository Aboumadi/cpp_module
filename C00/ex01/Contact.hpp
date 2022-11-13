/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumadi <aboumadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 00:26:26 by aboumadi          #+#    #+#             */
/*   Updated: 2022/11/06 00:26:26 by aboumadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP

# define CONTACT_HPP

# include <iostream>
# include <string>
# include <stdio.h>

class	Contact
{
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nick_name;
		std::string	phone_num;
		std::string	secret;
	public:
		Contact();
		/* Getters and setters */
		std::string	get_first_name();
		std::string	get_last_name();
		std::string	get_nick_name();
		std::string	get_phone_num();
		std::string	get_secret();
		void		set_first_name(std::string cmd);
		void		set_last_name(std::string cmd);
		void		set_nick_name(std::string cmd);
		void		set_phone_num(std::string cmd);
		void		set_secret(std::string cmd);
		~Contact();
};

#endif
