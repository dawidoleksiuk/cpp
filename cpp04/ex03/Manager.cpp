/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Manager.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doleksiu <doleksiu@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 16:22:04 by doleksiu          #+#    #+#             */
/*   Updated: 2026/06/04 17:26:24 by doleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Manager.hpp"
#include <iostream>

Manager::Manager()
{
	std::cout << "Manager Default constructor called" << std::endl;

}

Manager::Manager(const Manager &other)
{
	std::cout << "Manager Copy constructor called" << std::endl;
	_head = NULL;
	*this = other;
}

Manager &Manager::operator=(const Manager &other)
{
	t_node* otherTemp = other._head;
	t_node* thisTemp = _head;
	t_node* temp;
	std::cout << "Manager Copy assignment operator called" << std::endl;

	if (this != &other)
	{
		while (thisTemp)
		{
			temp = thisTemp;
			thisTemp = thisTemp->next;
			delete temp->data;
			delete temp;
		}
		_head = NULL;
		while (otherTemp)
		{
			temp = new t_node; 
			temp->data = (otherTemp->data)->clone();
			temp->next = NULL;
			if (_head == NULL)
				_head = temp;
			else
				thisTemp->next = temp;
			thisTemp = temp;
			otherTemp = otherTemp->next;
		}
	}
	return *this;
}

Manager::~Manager()
{
	t_node* temp;
	std::cout << "Manager Destructor called" << std::endl;
	while (_head)
	{
		temp = _head;
		_head = _head->next;
		delete temp->data;
		delete temp;
	}
}

void Manager::add_data(AMateria *m)
{
	t_node* thisTemp = _head;
	t_node* temp;

	temp = new t_node;
	temp->data = m;
	temp->next = NULL;
	if(_head == NULL)
	{
		_head = temp;
		return ;
	}
	while(_head && thisTemp->next)
		thisTemp = thisTemp->next;
	thisTemp->next = temp;
}
