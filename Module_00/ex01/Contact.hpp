/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 17:31:05 by zelabbas          #+#    #+#             */
/*   Updated: 2024/05/17 20:19:05 by zelabbas         ###   ########.fr       */
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
		std::string	getFirstName() const;
	
		void		setLastName(std::string);
		std::string	getLastName() const;

		void		setNickName(std::string);
		std::string	getNickName() const;
	
		void		setPhoneNumber(std::string);
		std::string	getPhoneNumber() const;
	
		void		setDarkestSecret(std::string);
		std::string	getDarkSecret() const;
	
		void		setIndex(int);
		int			getIndex() const;
		
		int			print_contact() const;
		std::string truncateString(const std::string&, size_t) const;
};

#endif