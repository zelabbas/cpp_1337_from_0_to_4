/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 12:38:36 by zelabbas          #+#    #+#             */
/*   Updated: 2024/05/11 15:28:51 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
	private:
		const Fixed x;
		const Fixed y;
	public:
		Point();
		Point(const float, const float);
		Point(const Point&);
		~Point();
		Point& operator= (const Point&);
		Fixed	get_x(void) const;
		Fixed	get_y(void) const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);
float	calculate_surface(Point const a, Point const b, Point const c);

#endif