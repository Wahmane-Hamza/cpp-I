/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 15:39:17 by hwahmane          #+#    #+#             */
/*   Updated: 2025/12/23 16:00:50 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
    std::cout << "WrongCat Default constructor called" << std::endl;
    this->type = "WrongCat";
}

WrongCat::~WrongCat(void)
{
    std::cout << "WrongCat Destructor called" <<  std::endl;
}

WrongCat&  WrongCat::operator = (const WrongCat &copy)
{
    std::cout << "WrongCat Copy assignment operator called" << std::endl;
    if (this != &copy)
    {
        this->type = copy.type;
    }
    return (*this);
}

WrongCat::WrongCat(const WrongCat &copy)
{
    std::cout << "WrongCat Copy constructor called" << std::endl;
    *this = copy;
}

void WrongCat::makeSound() const
{
    std::cout << "Wrong Meow Meow" << std::endl;
}
