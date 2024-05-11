/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 12:37:14 by zelabbas          #+#    #+#             */
/*   Updated: 2024/05/11 16:22:46 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void )
{
	Point a(0, 0);
    Point b(4, 0);
    Point c(0, 2);
    Point point(3, 0.2f);
	bool test = bsp(a, b, c, point);
	std::cout << "test: " << test << std::endl;
	return 0;
}