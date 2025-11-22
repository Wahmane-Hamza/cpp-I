/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 14:26:24 by wahmane           #+#    #+#             */
/*   Updated: 2025/11/22 16:07:35 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void): _name("unknown"), _hitpoints(10), _energypoints(10), _attackpoints(0)
{
    std::cout << "ClapTrap: " << this->_name << " Default constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap: " << this->_name << " Destructor called" <<  std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hitpoints(10), _energypoints(10), _attackpoints(0)
{
    std::cout << "ClapTrap: " << name << " Custom constructor called" << std::endl;
}

ClapTrap&  ClapTrap::operator = (const ClapTrap &copy)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &copy)
    {
        this->_name = copy._name;
        this->_hitpoints = copy._hitpoints;
        this->_attackpoints = copy._attackpoints;
        this->_energypoints = copy._energypoints;
    }
    return (*this);
}

ClapTrap::ClapTrap(const ClapTrap &copy): _name(copy._name), _hitpoints(copy._hitpoints), _energypoints(copy._energypoints), _attackpoints(copy._attackpoints)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

void ClapTrap::attack(const std::string& target)
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
    std::cout << "ClapTrap " << this->_name <<  " attacks " << target <<", causing " << this->_attackpoints << " points of damage!" << std::endl;
    this->_energypoints--;
}
void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hitpoints <= 0)
    {
        std::cout << "can't take damage because i'm dead" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << this->_name <<  " take " << amount << " points of damage!" << std::endl;
    if (this->_hitpoints > amount)
        this->_hitpoints -= amount;
    else
        this->_hitpoints = 0;
}
void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_hitpoints <= 0)
    {
        std::cout << "can't repaired because i'm dead" << std::endl;
        return;
    }
    if (this->_energypoints <= 0)
    {
        std::cout << "can't repaired because no energy left" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << this->_name <<  " repaired " << amount << " points of hit!" << std::endl;
    this->_hitpoints += amount;
    // TODO flsafa dial zid for 10
    this->_energypoints--;
}
