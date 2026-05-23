/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doleksiu <doleksiu@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 18:10:04 by doleksiu          #+#    #+#             */
/*   Updated: 2026/05/20 18:21:37 by doleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float	area(x1, y1, x2, y2, x3, y3)
{
	float area;

	area = (abs(x1*(y3-y2) + x2*(y3-y1) + x3*(y2-y1)))/2.0;
	return area;
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	float area;
	float areaA;
	float areaB;
	float areaC;

	area = areaC = area(a.x, a.y, b.x, b.y, c.x, c.y);
	areaA = area(point.x, point.y, b.x, b.y, c.x, c.y);
	areaB = area(a.x, a.y, point.x, point.y, c.x, c.y);
	areaC = area(a.x, a.y, b.x, b.y, point.x, point.y);
	if ((areaA + areaB + areaC) != area)
		return false;
	return true;
}