/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doleksiu <doleksiu@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 16:45:06 by doleksiu          #+#    #+#             */
/*   Updated: 2026/07/05 14:12:29 by doleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main(void)
{
	Point a(0, 0); 
	Point b(20, 0);
	Point c(10, 30);
	Point point(10, 15);

	if (bsp(a, b, c, point))
		std::cout << "The point is inside of the triangle" << std::endl;
	else
		std::cout << "The point is not inside of the triangle" << std::endl;
	return 0;
}
