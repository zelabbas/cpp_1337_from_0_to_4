/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 21:17:32 by zelabbas          #+#    #+#             */
/*   Updated: 2024/04/29 21:46:12 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	if (N <= 0)
		return (NULL);
	Zombie *tab = new(std::nothrow) Zombie[N];
	if (!tab)
	{
		std::cerr << "Failed to allocate memory for zombie horde" << std::endl;
		exit(1);
	}
	for (int i = 0; i < N; i++)
		tab[i].setName(name);
	return (tab);
}