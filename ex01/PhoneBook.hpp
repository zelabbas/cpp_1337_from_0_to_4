/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 17:31:15 by zelabbas          #+#    #+#             */
/*   Updated: 2024/04/28 18:30:07 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contacat.hpp"

class PhoneBook
{
	Contacat	tab[8];
	int			count;
	public:
					PhoneBook();
					~PhoneBook();
		void		add();
		void		search();
		int			print_phonebook();
};