/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 10:36:32 by zelabbas          #+#    #+#             */
/*   Updated: 2024/05/03 10:23:53 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	(void)av;
	Harl obj;

	void (Harl::*pointer) (std::string);
	pointer = &Harl::complain;
	if (ac != 1)
	{
		std::cerr << "The program don't accepte arguments." << std::endl;
		return (0);
	}
	obj.complain("INFO");
	obj.complain("DEBUG");
	obj.complain("WARNING");
	obj.complain("ERROR");
	obj.complain("NONE");
	(obj.*pointer) ("you");
}