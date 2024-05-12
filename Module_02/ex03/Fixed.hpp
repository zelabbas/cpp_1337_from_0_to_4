/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 12:37:05 by zelabbas          #+#    #+#             */
/*   Updated: 2024/05/12 16:18:57 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int fixed_point;
		static const int fractional;
	public:
		Fixed(void);
		Fixed(const int);
		Fixed(const float);
		Fixed(const Fixed&);
		~Fixed(void);
		Fixed& operator = (const Fixed&);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;
		Fixed& operator++(void);
		Fixed operator++(int);
		Fixed& operator--(void);
		Fixed operator--(int);
		bool operator > (const Fixed&) const;
		bool operator < (const Fixed&) const;
		bool operator >= (const Fixed&) const;
		bool operator <= (const Fixed&) const;
		bool operator == (const Fixed&) const;
		bool operator != (const Fixed&) const;
		Fixed operator + (const Fixed&) const;
		Fixed operator - (const Fixed&) const;
		Fixed operator * (const Fixed&) const;
		Fixed operator / (const Fixed&) const;

		static Fixed& min(Fixed&, Fixed&);
		static Fixed& min(const Fixed&, const Fixed&);

		static Fixed& max(Fixed&, Fixed&);
		static Fixed& max(const Fixed&, const Fixed&);
};

std::ostream	&operator<< (std::ostream& os, const Fixed& obj);

#endif