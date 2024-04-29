/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 17:31:15 by zelabbas          #+#    #+#             */
/*   Updated: 2024/04/29 16:21:44 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define	PHONEBOOK_HPP

#include "Contact.hpp"
#define RED_COLOR "\033[31m"
#define RESET_COLOR "\033[0m"

class PhoneBook
{
	Contact	tab[8];
	int			count;
	public:
					PhoneBook();
					~PhoneBook();
		void		add();
		void		search();
		int			print_phonebook();
};

#endif