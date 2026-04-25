/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doleksiu <doleksiu@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 15:20:05 by doleksiu          #+#    #+#             */
/*   Updated: 2026/04/25 23:05:37 by doleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"


std::string	Contact::setContactField(const std::string &msg)
{
	std::string	field;
	
	while (field.empty())
	{
		std::cout << msg;
		if (!std::getline(std::cin, field))
			break ;
	}
	return (field);

}

bool	Contact::setContact(int numOfContacts_)
{
	index = numOfContacts_;
	firstName_ = setContactField("Enter first name: ");
	if (firstName_.empty())
		return false;
	lastName_ = setContactField("Enter last name: ");
	if (lastName_.empty())
		return false;
	nickname_ = setContactField("Enter nickname: ");
	if (nickname_.empty())
		return false;
	phoneNumber_ = setContactField("Enter phone number: ");
	if (phoneNumber_.empty())
		return false;
	darkestSecret_ = setContactField("Enter darkest secret: ");
	if (darkestSecret_.empty())
		return false;
	return true;
}

void	Contact::displayPreviewField(const std::string &field, bool pipe)
{
	if (field.size() > 10)
		std::cout << field.substr(0,9) << ".";
	else
		std::cout << std::setw(10) << field;
	if (pipe)
		std::cout << "|";	
}

void	Contact::displayPreviewHeader()
{
	displayPreviewField("index", true);
	displayPreviewField("first name", true);
	displayPreviewField("last name", true);
	displayPreviewField("nickname", false);
	std::cout << std::endl;
}

void	Contact::displayPreviewRow()
{	
	std::cout << std::setw(10) << (index % 8) + 1 << "|";
	displayPreviewField(firstName_, true);
	displayPreviewField(lastName_, true);
	displayPreviewField(nickname_, false);
	std::cout << std::endl;
}
void	Contact::displayInfo(void)
{
	std::cout << std::endl << "The selected contact information:" << std::endl << std::endl;
	std::cout << "Index: " << (index % 8) + 1 << std::endl;
	std::cout << "First name: " << firstName_ << std::endl;
	std::cout << "Last name: " << lastName_ << std::endl;
	std::cout << "Nickname: " << nickname_ << std::endl;
	std::cout << "Darkest secret: " << darkestSecret_ << std::endl << std::endl;
}
