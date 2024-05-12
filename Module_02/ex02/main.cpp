/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 13:40:36 by zelabbas          #+#    #+#             */
/*   Updated: 2024/05/12 21:03:37 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed const c( Fixed( 5.25f ) * Fixed( 2 ) );
	Fixed const d(2);
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << b - a << std::endl;
	std::cout << b + a << std::endl;
	std::cout << b / a << std::endl;
	std::cout << c << std::endl;
	std::cout << d << std::endl;
	std::cout << c/d << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}