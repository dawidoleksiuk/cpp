/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doleksiu <doleksiu@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 18:10:04 by doleksiu          #+#    #+#             */
/*   Updated: 2026/10/01 21:07:53 by doleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <cmath>

Fixed	area(Fixed const x1, Fixed const y1, Fixed const x2, Fixed const y2, Fixed const x3, Fixed const y3)
{
	Fixed result;

	result = (x2-x1)*(y3-y1)-(y2-y1)*(x3-x1);
	return result;
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed areaA;
	Fixed areaB;
	Fixed areaC;

	areaA = area(a.getX(), a.getY(), b.getX(), b.getY(), point.getX(), point.getY());
	areaB = area(b.getX(), b.getY(), c.getX(), c.getY(), point.getX(), point.getY());
	areaC = area(c.getX(), c.getY(), a.getX(), a.getY(), point.getX(), point.getY());
	std::cout << areaA << std::endl;
	std::cout << areaB << std::endl;
	std::cout << areaC << std::endl;

	if ((areaA > 0 && areaB > 0 && areaC > 0) || (areaA < 0 && areaB < 0 && areaC < 0))
	{
		return true;
	}
	return false;
}