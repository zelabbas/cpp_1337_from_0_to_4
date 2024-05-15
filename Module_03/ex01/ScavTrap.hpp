/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 12:02:04 by zelabbas          #+#    #+#             */
/*   Updated: 2024/05/15 10:23:49 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(const std::string&);
		ScavTrap(const ScavTrap&);
		~ScavTrap(void);
		ScavTrap& operator= (const ScavTrap&);
		void guardGate(void);
		void attack(const std::string& target);
};

#endif