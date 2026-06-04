/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Manager.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doleksiu <doleksiu@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 16:22:02 by doleksiu          #+#    #+#             */
/*   Updated: 2026/06/04 17:20:35 by doleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MANAGER_HPP
#define MANAGER_HPP
#include "AMateria.hpp"

typedef struct s_node
{
	AMateria *data;
	struct s_node *next;
} t_node;

class Manager
{
public:
	Manager();
	Manager(const Manager &other);
	Manager& operator=(const Manager &other);
	~Manager();
	void add_data(AMateria *m);
private:
	t_node* _head;
};

#endif