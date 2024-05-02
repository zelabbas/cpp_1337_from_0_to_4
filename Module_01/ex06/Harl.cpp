/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 13:57:36 by zelabbas          #+#    #+#             */
/*   Updated: 2024/05/02 22:40:27 by zelabbas         ###   ########.fr       */
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
	std::cout << "[ DEBUG ]\nI love having extra bacon for my "
                 "7XL-double-cheese-triple-pickle-specialketchup burger.\n"
                 "I really do!\n" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]\nI cannot believe adding extra bacon costs "
                 "more money.\nYou didn’t put enough bacon in my burger! "
                 "If you did, I wouldn’t be asking for more!\n" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free.\n"
                 "I’ve been coming for years whereas you started working here since "
                 "last month.\n" << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]\nThis is unacceptable! I want to "
                 "speak to the manager now.\n" << std::endl;
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
			(this->*func)();
        case 1:
            func = &Harl::info;
			(this->*func)();
        case 2:
            func = &Harl::warning;
			(this->*func)();
        case 3:
            func = &Harl::error;
			(this->*func)();
			break ;
        default:
            std::cerr << "[ Probably complaining about insignificant problems ]" << std::endl;
            return ;
    }
}
