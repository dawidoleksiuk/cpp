/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doleksiu <doleksiu@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 16:45:20 by doleksiu          #+#    #+#             */
/*   Updated: 2026/05/16 21:20:44 by doleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

const int Fixed::_fractionalBits;

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	_fpNum = 0;
}

Fixed::Fixed(const int num)
{
	std::cout << "Int constructor called" << std::endl;
	_fpNum = num << _fractionalBits;
}

Fixed::Fixed(const float num)
{
	std::cout << "Float constructor called" << std::endl;
	_fpNum = (int)(roundf(num * pow(2,_fractionalBits))) ;
}

Fixed::Fixed(const Fixed &obj)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

Fixed &Fixed::operator=(const Fixed &obj)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &obj)
		_fpNum = obj._fpNum;
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_fpNum);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	Fixed::_fpNum = raw;
}

float Fixed::toFloat(void) const
{
	float	num;

	num = _fpNum / pow(2,_fractionalBits);
	return num;
}

int Fixed::toInt(void) const
{
	int	num;

	num = _fpNum >> _fractionalBits;
	return num;
}

std::ostream &operator<<(std::ostream &out, const Fixed &obj)
{
	out << obj.toFloat();
	return out;
}