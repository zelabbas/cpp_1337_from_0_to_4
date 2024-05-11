/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 12:39:22 by zelabbas          #+#    #+#             */
/*   Updated: 2024/05/11 16:11:14 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"


float	calculate_surface(Point const a, Point const b, Point const c)
{
	float res;
	res = ((a.get_x().toFloat()*(b.get_y().toFloat() - c.get_y().toFloat())) +
		(b.get_x().toFloat() * (c.get_y().toFloat() - a.get_y().toFloat())) +
		(c.get_x().toFloat()*(a.get_y().toFloat() - b.get_y().toFloat())));
	if (res < 0)
		return (-(res / 2));
	return (res / 2);
}



bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	float surface;
	float surface_1;
	float surface_2;
	float surface_3;
	float sum_three_surface;

	surface = calculate_surface(a, b, c);
	surface_1 = calculate_surface(a, point, c);
	surface_2 = calculate_surface(a, point, b);
	surface_3 = calculate_surface(b, point, c);

	sum_three_surface = surface_1 + surface_2 + surface_3;
	if (!surface_1 || !surface_2 || !surface_3)
		return (false);
	return (surface == sum_three_surface);
}
