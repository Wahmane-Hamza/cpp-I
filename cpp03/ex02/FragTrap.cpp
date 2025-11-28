/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 16:03:07 by hwahmane          #+#    #+#             */
/*   Updated: 2025/11/27 16:06:53 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void): ClapTrap("unknown")
{
    this->_hitpoints = 100;
    this->_energypoints = 100;
    this->_attackpoints = 30;
    std::cout << "FragTrap: " << this->_name << " Default constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap: " << this->_name << " Destructor called" <<  std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
    this->_hitpoints = 100;
    this->_energypoints = 100;
    this->_attackpoints = 30;
    std::cout << "FragTrap: " << name << " Custom constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& copy)
{
    if (this != &copy)
    {
        ClapTrap::operator=(copy);
        std::cout << "FragTrap: " << this->_name << " Copy assignment operator called" << std::endl;
    }
    return *this;
}

FragTrap::FragTrap(const FragTrap& copy) : ClapTrap(copy)
{
    std::cout << "FragTrap: " << this->_name << " Copy constructor called" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
    if (this->_hitpoints <= 0)
    {
        std::cout << "can't attack because i'm dead" << std::endl;
        return;
    }
    if (this->_energypoints <= 0)
    {
        std::cout << "can't attack because no energy left" << std::endl;
        return;
    }
    std::cout << "FragTrap " << this->_name <<  " attacks " << target <<", causing " << this->_attackpoints << " points of damage!" << std::endl;
    this->_energypoints--;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap: " << this->_name << "requests a positive high five!" << std::endl;
}
