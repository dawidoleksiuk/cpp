/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doleksiu <doleksiu@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 18:49:08 by doleksiu          #+#    #+#             */
/*   Updated: 2026/05/20 18:36:23 by doleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point()
{
	std::cout << "Default constructor called" << std::endl;
	Fixed x(0);
	Fixed y(0);
}

Point::Point(const float num1, const float num2)
{
	std::cout << "Constructor called" << std::endl;
	Fixed x(num1);
	Fixed y(num2);
}

Point::Point(const Point &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Point &Point::operator=(const Point &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->x = other.x;
		y = other.y;
	}
	return *this;
}

Point::~Point()
{
	std::cout << "Destructor called" << std::endl;
}