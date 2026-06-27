/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doleksiu <doleksiu@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 16:22:02 by doleksiu          #+#    #+#             */
/*   Updated: 2026/06/06 15:16:37 by doleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <exception>
#include <string>
#include <iostream>

class Bureaucrat
{
public:
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat &other);
	Bureaucrat& operator=(const Bureaucrat &other);
	~Bureaucrat();
	std::string getName() const;
	std::string	getGrade() const;
	class GradeTooHighException : public std::exception
	{
		public:
			const char* what() const throw() {return "Exception: Grade too high";}
	};
	class GradeTooLowException : public std::exception
	{
		public:
			const char* what() const throw() {return "Exception: Grade too low";}
	};
private:
	std::string const _name;
	int	_grade;
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &obj);

#endif