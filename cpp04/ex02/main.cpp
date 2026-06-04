/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doleksiu <doleksiu@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 20:17:31 by doleksiu          #+#    #+#             */
/*   Updated: 2026/06/04 12:18:53 by doleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	// const AAnimal* meta = new AAnimal();
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	// meta->makeSound();

	// delete meta;
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

	std::cout << "\nTest the brain part\n\n";

	const AAnimal *k[10];
	
	for (int n = 0; n < 5; n++)
		k[n] = new Dog();
	for (int n = 5; n < 10; n++)
		k[n] = new Cat();
	for (int n = 0; n < 10; n++)
		delete k[n];
	
	Dog	dog_A;
	Dog	dog_B;
	dog_A.setIdea(0, "bbbbbb");
	dog_B = dog_A;
	dog_A.setIdea(0, "aaaaa");
	Dog dog_C = dog_A;
	dog_C.setIdea(0, "cccccc");
	std::cout << "Dog's A idea: " << dog_A.getIdea(0) << std::endl;
	std::cout << "Dog's B idea: " << dog_B.getIdea(0) << std::endl;
	std::cout << "Dog's C idea: " << dog_C.getIdea(0) << std::endl;
	return 0;
}
