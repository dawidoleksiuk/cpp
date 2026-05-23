/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doleksiu <doleksiu@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 18:49:10 by doleksiu          #+#    #+#             */
/*   Updated: 2026/05/20 18:04:47 by doleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP
#include <iostream>
#include "Fixed.hpp"

class	Point
{
public:
	Point();
	Point(const int num);
	Point(const float num1, const float num2);
	Point(const Point &other);
	Point &operator=(const Point &other);
	~Point();
private:
	Fixed const x;
	Fixed const y;
};

#endif