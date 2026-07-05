/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doleksiu <doleksiu@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 18:10:04 by doleksiu          #+#    #+#             */
/*   Updated: 2026/07/05 14:23:52 by doleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <cmath>

float	area(Fixed const x1, Fixed const y1, Fixed const x2, Fixed const y2, Fixed const x3, Fixed const y3)
{
	float result;

	result = (abs(x1.toFloat()*(y3.toFloat()-y2.toFloat()) + x2.toFloat()*(y3.toFloat()-y1.toFloat()) + x3.toFloat()*(y2.toFloat()-y1.toFloat())))/2.0;
	return result;
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	float total;
	float areaA;
	float areaB;
	float areaC;

	total = area(a.getX(), a.getY(), b.getX(), b.getY(), c.getX(), c.getY());
	areaA = area(point.getX(), point.getY(), b.getX(), b.getY(), c.getX(), c.getY());
	areaB = area(a.getX(), a.getY(), point.getX(), point.getY(), c.getX(), c.getY());
	areaC = area(a.getX(), a.getY(), b.getX(), b.getY(), point.getX(), point.getY());
	if ((areaA + areaB + areaC) != total)
		return false;
	return true;
}