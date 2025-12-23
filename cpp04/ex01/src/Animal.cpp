/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 15:03:20 by hwahmane          #+#    #+#             */
/*   Updated: 2025/12/23 18:09:08 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
    std::cout << "Animal Default constructor called" << std::endl;
}

Animal::~Animal(void)
{
    std::cout << "Animal Destructor called" <<  std::endl;
}

Animal&  Animal::operator = (const Animal &copy)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &copy)
    {
        this->type = copy.type;
    }
    return (*this);
}

Animal::Animal(const Animal &copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

const std::string	Animal::getType() const
{
    return (this->type);
}

void Animal::makeSound() const
{
    std::cout << "Animal sound" << std::endl;
}
