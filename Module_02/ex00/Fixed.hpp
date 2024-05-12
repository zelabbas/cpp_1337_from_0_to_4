/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 16:10:56 by zelabbas          #+#    #+#             */
/*   Updated: 2024/05/12 15:47:39 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed
{
	private:
		int fixed_point;
		static const int fractional;
	public:
		Fixed(void);
		Fixed(const Fixed&);
		~Fixed(void);
		Fixed& operator=(const Fixed&);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};

#endif