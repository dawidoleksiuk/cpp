/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doleksiu <doleksiu@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 16:45:13 by doleksiu          #+#    #+#             */
/*   Updated: 2026/07/05 12:42:29 by doleksiu         ###   ########.fr       */
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
	Fixed(const Fixed& obj);
	Fixed& operator=(const Fixed& obj);
	~Fixed();
	int	getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
private:
	int	_fpNum;
	static const int _fractionalBits = 8;
};

std::ostream &operator<<(std::ostream& out, const Fixed& obj);

#endif