/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 17:31:05 by zelabbas          #+#    #+#             */
/*   Updated: 2024/04/28 21:31:49 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CONTACT_HPP
#define	CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Contact
{
	std::string firstname;
	std::string	lastname;
	std::string	nickname;
	std::string	phone_number;
	std::string darkest_secret;
	int			index;

	public:
					Contact();
					~Contact();
		
		void		setFirstName(std::string);
		std::string	getFirstName();
	
		void		setLastName(std::string);
		std::string	getLastName();

		void		setNickName(std::string);
		std::string	getNickName();
	
		void		setPhoneNumber(std::string);
		std::string	getPhoneNumber();
	
		void		setDarkestSecret(std::string);
		std::string	getDarkSecret();
	
		void		setIndex(int);
		int			getIndex();
		
		int			print_contact();
		std::string truncateString(const std::string&, size_t);
};

#endif