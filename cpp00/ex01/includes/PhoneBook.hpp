/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doleksiu <doleksiu@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 15:14:58 by doleksiu          #+#    #+#             */
/*   Updated: 2026/04/26 12:39:32 by doleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"
#include <iostream>
#include <cstdio>

class PhoneBook{
public:
	PhoneBook();
	void	addContact(void);
	void	displayContactsPreview(void);
	void	searchContact(void);
private:
	int	numOfContacts_;
	Contact	contacts[8];
};

#endif