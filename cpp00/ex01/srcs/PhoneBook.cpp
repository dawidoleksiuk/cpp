/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doleksiu <doleksiu@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 15:19:58 by doleksiu          #+#    #+#             */
/*   Updated: 2026/04/25 23:13:34 by doleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "Contact.hpp"
#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : numOfContacts_(0) {}

bool	PhoneBook::addContact(void)
{
	if (!contacts[numOfContacts_ % 8].setContact(numOfContacts_))
		return false;
	numOfContacts_++;
	return true;
}

void	PhoneBook::displayContactsPreview(void)
{
	contacts[0].displayPreviewHeader();
	for (int i = 0; i < 8; i++)
	{
		std::cout << std::setw(10);
		contacts[i].displayPreviewRow();
	}
	std::cout << std::endl;
}

bool	isNumber(const std::string &str)
{
	for (size_t i = 0; i < str.size(); i++)
	{
		if (!isdigit(str[i]))
		{
			std::cout << "Please provide a number." << std::endl;
			return false;
		}
	}
	return true;
}

void	PhoneBook::searchContact(void)
{
	std::string	userInput;
	int	index;
	
	if (numOfContacts_ == 0)
	{
		std::cout << "There are no contacts to search." << std::endl;
		return ;
	}
	std::cout << std::endl;
	displayContactsPreview();
	std::cout << "Please select contact index you would like to display:" << std::endl;
	std::cout << std::endl;
	while (1)
	{
		if (!std::getline(std::cin, userInput))
			continue ;
		if (!isNumber(userInput))
			continue ;
		index = atoi(userInput.c_str()) - 1;
		if (index < 0 || index > (numOfContacts_ - 1) % 8)
			std::cout << "This index is incorrect." << std::endl;
		else
			break ;
	}
	
	contacts[index].displayInfo();
}
