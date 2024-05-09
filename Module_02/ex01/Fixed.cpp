/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 13:40:30 by zelabbas          #+#    #+#             */
/*   Updated: 2024/05/09 21:14:27 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fractional = 8;

Fixed::Fixed(void)
{
	this->fixed_point = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int fixedpoint)
{
	this->fixed_point = fixedpoint << fractional;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float floatpoint)
{
	this->fixed_point = (int)roundf(floatpoint * (1 << this->fractional));
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& obj)
{
	if (this != &obj)
		this->fixed_point = obj.fixed_point;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& obj)
{
	if (this != &obj)
		this->fixed_point = obj.getRawBits();
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixed_point);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->fixed_point = raw;
}

int	Fixed::toInt(void) const
{
	return (this->fixed_point >> fractional);
}

float	Fixed::toFloat(void) const
{
	return ((float)(this->fixed_point) / (1 << fractional));
}

std::ostream	&operator<< (std::ostream& os, const Fixed& obj)
{
	os << obj.toFloat();
	return (os);
}