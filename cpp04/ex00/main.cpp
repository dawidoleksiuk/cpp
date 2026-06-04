/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doleksiu <doleksiu@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 20:17:31 by doleksiu          #+#    #+#             */
/*   Updated: 2026/05/28 22:47:11 by doleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;

	const WrongAnimal* wrongA = new WrongAnimal();
	const WrongAnimal* wrongC = new WrongCat();
	WrongCat c;

	std::cout << wrongC->getType() << " " << std::endl;
	wrongC->makeSound();
	wrongA->makeSound();
	std::cout << "wrong cat sound: " << std::endl;
	c.makeSound();

	delete wrongA;
	delete wrongC;
	return 0;
}
