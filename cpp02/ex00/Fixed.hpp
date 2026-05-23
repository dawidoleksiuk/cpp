/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doleksiu <doleksiu@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 16:45:13 by doleksiu          #+#    #+#             */
/*   Updated: 2026/05/14 19:02:46 by doleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

class	Fixed
{
public:
	Fixed();
	Fixed(const Fixed &obj);
	Fixed &operator=(const Fixed &obj);
	~Fixed();
	int	getRawBits(void) const;
	void setRawBits(int const raw);
private:
	int	_fpNum;
	static const int _fractionalBits = 8;
};

#endif