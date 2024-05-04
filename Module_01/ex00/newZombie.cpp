/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 20:51:33 by zelabbas          #+#    #+#             */
/*   Updated: 2024/05/04 16:09:49 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
	Zombie *obj = new(std::nothrow) Zombie;
	if (!obj)
	{
		std::cout << "Faild to allocate memory." << std::endl;
		exit(1);
	}
	obj->setName(name);
	return (obj);
}