/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 13:57:36 by zelabbas          #+#    #+#             */
/*   Updated: 2024/05/03 10:27:52 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <functional> 

Harl::Harl()
{
	
}

Harl::~Harl()
{
	
}

void	Harl::debug(void)
{
	std::cout << "DEBUG: I love having extra bacon for my "
                 "7XL-double-cheese-triple-pickle-specialketchup burger. "
                 "I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "INFO: I cannot believe adding extra bacon costs "
                 "more money. You didn’t put enough bacon in my burger! "
                 "If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "WARNING: I think I deserve to have some extra bacon for free. "
                 "I’ve been coming for years whereas you started working here since "
                 "last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "ERROR: This is unacceptable! I want to "
                 "speak to the manager now." << std::endl;
}

void Harl::complain(std::string level) {
    void (Harl::*func)();
	size_t	i;
	std::string	levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	i = 0;
	while (i < 4 && levels[i] != level)
		i++;
	
	switch(i)
	{
        case 0:
            func = &Harl::debug;
            break;
        case 1:
            func = &Harl::info;
            break;
        case 2:
            func = &Harl::warning;
            break;
        case 3:
            func = &Harl::error;
            break;
        default:
            std::cerr << RED_COLOR <<"Unknown complaint level: " << level << RESET_COLOR << std::endl;
            return;
    }
    (this->*func)();
}
