/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 13:40:30 by zelabbas          #+#    #+#             */
/*   Updated: 2024/05/10 12:26:41 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fractional = 8;

Fixed::Fixed(void)
{
	this->fixed_point = 0;
}

Fixed::Fixed(const int fixedpoint)
{
	this->fixed_point = fixedpoint << fractional;
}

Fixed::Fixed(const float floatpoint)
{
	this->fixed_point = (int)roundf(floatpoint * (1 << this->fractional));
}

Fixed::Fixed(const Fixed& obj)
{
	if (this != &obj)
		this->fixed_point = obj.fixed_point;
}

Fixed::~Fixed(void)
{
	
}

Fixed& Fixed::operator=(const Fixed& obj)
{
	if (this != &obj)
		this->fixed_point = obj.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const
{
	return (this->fixed_point);
}

void	Fixed::setRawBits(int const raw)
{
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

bool	operator>(const Fixed& obj_1, const Fixed& obj_2)
{
	return	(obj_1.fixed_point > obj_2.fixed_point);
}


bool	operator>=(const Fixed& obj_1, const Fixed& obj_2)
{
	return (obj_1.fixed_point >= obj_2.fixed_point);
}

bool	operator<(const Fixed& obj_1, const Fixed& obj_2)
{
	return (obj_1.fixed_point < obj_2.fixed_point);
}

bool	operator<=(const Fixed& obj_1, const Fixed& obj_2)
{
	return (obj_1.fixed_point < obj_2.fixed_point);
}

bool	operator==(const Fixed& obj_1, const Fixed& obj_2)
{
	return (obj_1.fixed_point == obj_2.fixed_point);
}

bool	operator!=(const Fixed& obj_1, const Fixed& obj_2)
{
	return (obj_1.fixed_point != obj_2.fixed_point);
}

Fixed	operator+ (const Fixed& obj_1, const Fixed& obj_2)
{
	float	tmp;

	tmp = obj_1.toFloat() + obj_2.toFloat();
	return (Fixed(tmp));
}

Fixed	operator- (const Fixed& obj_1, const Fixed& obj_2)
{
	float	tmp;

	tmp = obj_1.toFloat() - obj_2.toFloat();
	return (Fixed(tmp));
}

Fixed	operator* (const Fixed& obj_1, const Fixed& obj_2)
{
	float	tmp;

	tmp = obj_1.toFloat() * obj_2.toFloat();
	return (Fixed(tmp));
}

Fixed	operator/ (const Fixed& obj_1, const Fixed& obj_2)
{
	float	tmp;
	if (!obj_2.toFloat())
	{
		std::cout << "Error:division by zero is undefined" << std::endl;
		exit(-1);
	}
	tmp = obj_1.toFloat() / obj_2.toFloat();
	return (Fixed(tmp));
}

// prefix increment:
Fixed&	Fixed::operator++(void)
{
	++this->fixed_point;
	return (*this);
}

// postfix increment:
Fixed	Fixed::operator++(int)
{
	Fixed tmp(this->toFloat());
	++this->fixed_point;
	return (tmp);
}

// prefix pre-decrement:
Fixed&	Fixed::operator--(void)
{
	--this->fixed_point;
	return (*this);
}

// postfix pre-decrement:
Fixed	Fixed::operator--(int)
{
	Fixed tmp(this->toFloat());
	--this->fixed_point;
	return (tmp);
}

Fixed&	Fixed::min(Fixed& obj_1, Fixed& obj_2)
{
	return (obj_1 < obj_2) ? obj_1 : obj_2;
}

Fixed&	Fixed::min(const Fixed& obj_1, const Fixed& obj_2)
{
	return (obj_1 < obj_2) ? (Fixed& )obj_1 : (Fixed& )obj_2;
}

Fixed&	Fixed::max(Fixed& obj_1, Fixed& obj_2)
{
	return (obj_1 > obj_2) ? obj_1 : obj_2;
}

Fixed&	Fixed::max(const Fixed& obj_1, const Fixed& obj_2)
{
	return (obj_1 > obj_2) ? (Fixed& )obj_1 : (Fixed& )obj_2;
}
