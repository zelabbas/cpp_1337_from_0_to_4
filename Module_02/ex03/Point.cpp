/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 12:38:32 by zelabbas          #+#    #+#             */
/*   Updated: 2024/05/11 15:29:02 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): x(), y()
{
	
}

Point::Point(const float x_val, const float y_val) : x(x_val), y(y_val)
{
	
}

Point::Point(const Point& point) : x(point.x), y(point.y)
{
	
}

Point::~Point()
{
	
}

Point& Point::operator=(const Point& obj)
{
    if (this != &obj)
	{
        // Dereference pointers to members and assign values
        *(const_cast<Fixed*>(&this->x)) = obj.x;
        *(const_cast<Fixed*>(&this->y)) = obj.y;
    }
    return (*this);
}

Fixed	Point::get_x(void) const
{
	return (this->x);
}

Fixed Point::get_y(void) const
{
	return(this->y);
}

