/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 15:03:20 by hwahmane          #+#    #+#             */
/*   Updated: 2025/12/23 18:09:08 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void)
{
    std::cout << "AAnimal Default constructor called" << std::endl;
}

AAnimal::~AAnimal(void)
{
    std::cout << "AAnimal Destructor called" <<  std::endl;
}

AAnimal&  AAnimal::operator = (const AAnimal &copy)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &copy)
    {
        this->type = copy.type;
    }
    return (*this);
}

AAnimal::AAnimal(const AAnimal &copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

const std::string	AAnimal::getType() const
{
    return (this->type);
}

void AAnimal::makeSound() const
{
    std::cout << "AAnimal sound" << std::endl;
}
