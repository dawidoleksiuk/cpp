/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doleksiu <doleksiu@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 21:05:59 by doleksiu          #+#    #+#             */
/*   Updated: 2026/06/06 15:23:31 by doleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		// Bureaucrat *obj = new Bureaucrat("aaa", 1111);
		// Bureaucrat *obj = new Bureaucrat("bbb", 0);
		Bureaucrat *obj = new Bureaucrat("bbb", 5);
		std::cout << *obj << std::endl;
		delete obj;
	}
	catch (const Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (const Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << e.what() << std::endl;
	}

}