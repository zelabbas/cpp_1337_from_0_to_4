/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 12:03:50 by zelabbas          #+#    #+#             */
/*   Updated: 2024/05/14 11:48:18 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
	private:
		std::string name;
		int			hit_points;
		int			energy_points;
		int			attack_damage;
	public:
		ClapTrap();
		ClapTrap(const std::string &);
		ClapTrap(const ClapTrap&);
		~ClapTrap(void);
		
		ClapTrap& operator=(const ClapTrap&);
		
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		const std::string& getName(void);
		int	getHitPoints(void);
		int	getEnergyPoints(void);
		int	getAttackDamage(void);

		void	setName(std::string&);
		void	setHitPoints(unsigned int);
		void	setEnergyPoints(unsigned int);
		void	setAttackDamage(unsigned int);
};

#endif