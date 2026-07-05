/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doleksiu <doleksiu@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 16:45:13 by doleksiu          #+#    #+#             */
/*   Updated: 2026/07/05 13:43:26 by doleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class	Fixed
{
public:
	Fixed();
	Fixed(const int num);
	Fixed(const float num);
	Fixed(const Fixed& other);
	Fixed& operator=(const Fixed& other);
	~Fixed();
	bool operator>(const Fixed& other) const;
	bool operator<(const Fixed& other) const;
	bool operator>=(const Fixed& other) const;
	bool operator<=(const Fixed& other) const;
	bool operator==(const Fixed& other) const;
	bool operator!=(const Fixed& other) const;
	Fixed operator+(const Fixed& other) const;
	Fixed operator-(const Fixed& other) const;
	Fixed operator*(const Fixed& other) const;
	Fixed operator/(const Fixed& other) const;
	Fixed& operator++();
	Fixed operator++(int);
	Fixed& operator--();
	Fixed operator--(int);
	int	getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
	static Fixed& min(Fixed& num1, Fixed& num2);
	static const Fixed& min(const Fixed& num1, const Fixed& num2);
	static Fixed& max(Fixed& num1, Fixed& num2);
	static const Fixed& max(const Fixed& num1, const Fixed& num2);
private:
	int	_fpNum;
	static const int _fractionalBits = 8;
};

std::ostream &operator<<(std::ostream& out, const Fixed& fixed);

#endif