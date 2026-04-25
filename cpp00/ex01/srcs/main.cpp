/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doleksiu <doleksiu@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 15:26:00 by doleksiu          #+#    #+#             */
/*   Updated: 2026/04/25 22:33:02 by doleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main()
{
	std::string	command;
	PhoneBook phonebook;

	while (1)
	{
		std::cout << "To continue, please enter one of the commands: ADD, SEARCH or EXIT" << std::endl;
		if (!std::getline(std::cin, command))
			break ;
		if (command.compare("ADD") == 0)
			phonebook.addContact();
		if (command.compare("SEARCH") == 0)
			phonebook.searchContact();
		if (command.compare("EXIT") == 0)
			break ;
	}
	return 0;
}