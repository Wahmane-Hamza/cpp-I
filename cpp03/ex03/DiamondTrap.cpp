/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 16:08:26 by hwahmane          #+#    #+#             */
/*   Updated: 2025/11/28 17:20:27 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void): ClapTrap("unknown_clap_name")
{
    this->_name = "unknown";
    this->_hitpoints = 100;
    this->_energypoints = 50;
    this->_attackpoints = 30;
    std::cout << "DiamondTrap: " << this->_name << " Default constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap: " << this->_name << " Destructor called" <<  std::endl;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name)
{
    this->_hitpoints = 100;
    this->_energypoints = 50;
    this->_attackpoints = 20;
    std::cout << "DiamondTrap: " << name << " Custom constructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& copy)
{
    if (this != &copy)
    {
        ClapTrap::operator=(copy);
        std::cout << "DiamondTrap: " << this->_name << " Copy assignment operator called" << std::endl;
    }
    return *this;
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy) : ClapTrap(copy)
{
    std::cout << "DiamondTrap: " << this->_name << " Copy constructor called" << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name: " << this->_name << std::endl;
	std::cout << "ClapTrap name: " <<  ClapTrap::_name << std::endl;
}
