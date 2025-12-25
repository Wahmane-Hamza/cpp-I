/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 15:38:42 by hwahmane          #+#    #+#             */
/*   Updated: 2025/12/23 18:09:45 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAAnimal::WrongAAnimal(void)
{
    std::cout << "WrongAAnimal Default constructor called" << std::endl;
}

WrongAAnimal::~WrongAAnimal(void)
{
    std::cout << "WrongAAnimal Destructor called" <<  std::endl;
}

WrongAAnimal&  WrongAAnimal::operator = (const WrongAAnimal &copy)
{
    std::cout << "WrongAAnimal Copy assignment operator called" << std::endl;
    if (this != &copy)
    {
        this->type = copy.type;
    }
    return (*this);
}

WrongAAnimal::WrongAAnimal(const WrongAAnimal &copy)
{
    std::cout << "WrongAAnimal Copy constructor called" << std::endl;
    *this = copy;
}

const std::string	WrongAAnimal::getType() const
{
    return (this->type);
}

void WrongAAnimal::makeSound() const
{
    std::cout << "WrongAAnimal sound" << std::endl;
}

