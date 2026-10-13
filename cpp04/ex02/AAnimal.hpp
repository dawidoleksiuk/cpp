/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A_AAnimal.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doleksiu <doleksiu@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 20:18:32 by doleksiu          #+#    #+#             */
/*   Updated: 2026/06/04 12:11:11 by doleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP
#include <iostream>

class AAnimal
{
public:
	AAnimal();
	AAnimal(const AAnimal& other);
	AAnimal& operator=(const AAnimal& other);
	virtual ~AAnimal();
	virtual void makeSound() const = 0;
	std::string getType() const;
protected:
	std::string _type;
};

#endif