/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 15:03:27 by hwahmane          #+#    #+#             */
/*   Updated: 2025/12/23 18:41:07 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void): AAnimal()
{
    this->type = "Cat";
    this->_brain = new Brain();
    std::cout << "Cat Default constructor called" << std::endl;
}

Cat::~Cat(void)
{
    delete this->_brain;
    std::cout << "Cat Destructor called" <<  std::endl;
}

Cat&  Cat::operator = (const Cat &copy)
{
    std::cout << "Cat Copy assignment operator called" << std::endl;
    if (this != &copy)
    {
        this->type = copy.type;
        delete this->_brain;
        this->_brain = new Brain(*(copy._brain));
    }
    return (*this);
}

Cat::Cat(const Cat &copy): AAnimal(copy)
{
    std::cout << "Cat Copy constructor called" << std::endl;
    this->_brain = new Brain(*(copy._brain));
}

void Cat::makeSound() const
{
    std::cout << "Meow Meow" << std::endl;
}

const std::string	Cat::getIdea(int idx) const
{
	return (this->_brain->getIdea(idx));
}

void	Cat::setIdea(int idx, std::string& idea)
{
	this->_brain->setIdea(idx, idea);
}
