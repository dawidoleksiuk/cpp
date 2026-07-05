/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doleksiu <doleksiu@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 16:45:20 by doleksiu          #+#    #+#             */
/*   Updated: 2026/07/05 13:36:15 by doleksiu         ###   ########.fr       */
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
	_fpNum = (int)(roundf(num * pow(2,_fractionalBits)));
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		_fpNum = other._fpNum;
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

bool Fixed::operator>(const Fixed& other) const
{
	return (_fpNum > other._fpNum);
}

bool Fixed::operator<(const Fixed& other) const
{
	return (_fpNum < other._fpNum);
}

bool Fixed::operator>=(const Fixed& other) const
{
	return (_fpNum >= other._fpNum);
}

bool Fixed::operator<=(const Fixed& other) const
{
	return (_fpNum <= other._fpNum);
}

bool Fixed::operator==(const Fixed& other) const
{
	return (_fpNum == other._fpNum);
}

bool Fixed::operator!=(const Fixed& other) const
{
	return (_fpNum != other._fpNum);
}

Fixed Fixed::operator+(const Fixed& other) const
{
	Fixed result;

	result._fpNum = _fpNum + other._fpNum;

	return result;
}

Fixed Fixed::operator-(const Fixed& other) const
{
	Fixed result;

	result._fpNum = _fpNum - other._fpNum;

	return result;
}

Fixed Fixed::operator*(const Fixed& other) const
{
	Fixed result;
	float num;

	num = this->toFloat() * other.toFloat();
	result._fpNum = (int)(roundf(num * pow(2,_fractionalBits))) ;

	return result;
}

Fixed Fixed::operator/(const Fixed& other) const
{
	Fixed result;
	float num;

	num = this->toFloat() / other.toFloat();
	result._fpNum = (int)(roundf(num * pow(2,_fractionalBits))) ;

	return result;
}

Fixed& Fixed::operator++()
{
	_fpNum++;

	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed temp = *this;

	_fpNum++;
	return temp;
}

Fixed& Fixed::operator--()
{
	_fpNum--;

	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed temp = *this;

	_fpNum--;
	return temp;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_fpNum);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	_fpNum = raw;
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

Fixed& Fixed::min(Fixed& num1, Fixed& num2)
{
	if (num1._fpNum > num2._fpNum)
		return (num2);
	return (num1);
}

const Fixed& Fixed::min(const Fixed& num1, const Fixed& num2)
{
	if (num1._fpNum > num2._fpNum)
		return (num2);
	return (num1);
}

Fixed& Fixed::max(Fixed& num1, Fixed& num2)
{
	if (num1._fpNum < num2._fpNum)
		return (num2);
	return (num1);
}

const Fixed& Fixed::max(const Fixed& num1, const Fixed& num2)
{
	if (num1._fpNum < num2._fpNum)
		return (num2);
	return (num1);
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
	out << fixed.toFloat();
	return out;
}
