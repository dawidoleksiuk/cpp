/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doleksiu <doleksiu@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 18:49:08 by doleksiu          #+#    #+#             */
/*   Updated: 2026/07/05 14:04:06 by doleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point()
{
	std::cout << "Default constructor called" << std::endl;
	Fixed _x(0);
	Fixed _y(0);
}

Point::Point(const float num1, const float num2)
{
	std::cout << "Constructor called" << std::endl;
	Fixed _x(num1);
	Fixed _y(num2);
}

Point::Point(const Point& other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Point& Point::operator=(const Point&)
{
	std::cout << "Copy assignment operator called" << std::endl;
	return *this;
}

Point::~Point()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed	Point::getX() const
{
	return _x;
}

Fixed	Point::getY() const
{
	return _y;
}

