/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doleksiu <doleksiu@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 18:49:08 by doleksiu          #+#    #+#             */
/*   Updated: 2026/10/01 21:04:02 by doleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): _x(0), _y(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Point::Point(const float num1, const float num2): _x(num1), _y(num2)
{
	std::cout << "Constructor called" << std::endl;
}

Point::Point(const Point& other): _x(other.getX()), _y(other.getY())  
{
	std::cout << "Copy constructor called" << std::endl;
}

Point& Point::operator=(const Point& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	(void)other;
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

