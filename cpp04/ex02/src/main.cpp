/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 16:48:14 by hwahmane          #+#    #+#             */
/*   Updated: 2025/12/23 18:41:07 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	// ====================== Subject Test ======================
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();
	delete j; //should not create a leak
	delete i;
	
	// ====================== My Test ======================
	AAnimal	*AAnimals[10];

	for (int i = 0; i < 10; i++)
	{
		if (i < 5)
			AAnimals[i] = new Dog();
		else
			AAnimals[i] = new Cat();
	}
	
	std::cout << "---------------------" << std::endl;
	for (int i = 0; i < 10; i++)
	{
		std::cout << AAnimals[i]->getType() << std::endl;
		AAnimals[i]->makeSound();
	}
	std::cout << "---------------------" << std::endl;
	for (int i = 0; i < 10; i++)
	{
		delete	AAnimals[i];
	}
	
	// ====================== deep copy Test ======================
	std::string ideas[10] = {"Fetch the ball: 1", "Fetch the ball: 2", "Fetch the ball: 3", "Fetch the ball: 4", "Fetch the ball: 5"
		, "Fetch the ball: 6", "Fetch the ball: 7", "Fetch the ball: 8", "Fetch the ball: 9", "Fetch the ball: 10"};
	Dog *original = new Dog();

	for (int i = 0; i < 10; i++)
	{	
		original->setIdea(i, ideas[i]);
	}
	
	for (int i = 0; i < 10; i++)
	{	
		std::cout << original->getIdea(i) << std::endl;
	}

	Dog *copy = new Dog(*original);
	for (int i = 0; i < 10; i++)
	{	
		std::cout << copy->getIdea(i) << std::endl;
	}

	delete original;
	delete copy;
	
	return 0;
}

