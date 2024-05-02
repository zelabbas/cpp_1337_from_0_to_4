/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 09:54:34 by zelabbas          #+#    #+#             */
/*   Updated: 2024/05/02 10:06:47 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

std::string	replace_string(std::string line,std::string str_toreplace, std::string str_replace)
{
	size_t pos = line.find(str_toreplace);
    while (pos != std::string::npos)
    {
        line = line.substr(0, pos) + str_replace + line.substr(pos + str_toreplace.length());
        pos = line.find(str_toreplace, pos + str_replace.length());
    }
    return line;
}
