/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 15:02:43 by hwahmane          #+#    #+#             */
/*   Updated: 2025/12/23 18:32:20 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void): Animal()
{
    this->type = "Dog";
    this->_brain = new Brain();
    std::cout << "Dog Default constructor called" << std::endl;
}

Dog::~Dog(void)
{
    delete this->_brain;
    std::cout << "Dog Destructor called" <<  std::endl;
}

Dog&  Dog::operator = (const Dog &copy)
{
    std::cout << "Dog Copy assignment operator called" << std::endl;
    if (this != &copy)
    {
        this->type = copy.type;
        delete this->_brain;
        this->_brain = new Brain(*(copy._brain));
    }
    return (*this);
}

Dog::Dog(const Dog &copy): Animal(copy)
{
    std::cout << "Dog Copy constructor called" << std::endl;
    this->_brain = new Brain(*(copy._brain));
}

void Dog::makeSound() const
{
    std::cout << "Woof Woof" << std::endl;
}

const std::string	Dog::getIdea(int idx) const
{
	return (this->_brain->getIdea(idx));
}

void	Dog::setIdea(int idx, std::string& idea)
{
	this->_brain->setIdea(idx, idea);
}
