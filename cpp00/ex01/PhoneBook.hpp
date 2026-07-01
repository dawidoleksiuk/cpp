/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doleksiu <doleksiu@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 15:14:58 by doleksiu          #+#    #+#             */
/*   Updated: 2026/07/01 13:55:40 by doleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"

class PhoneBook
{
public:
	PhoneBook();
	void	addContact(void);
	void	searchContact(void);
private:
	int	_numOfContacts;
	Contact	_contacts[8];
	void	displayContactsPreview(void);
	static void	displayPreviewHeader(void);
};

#endif