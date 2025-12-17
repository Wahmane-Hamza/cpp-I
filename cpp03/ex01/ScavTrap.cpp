/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 14:26:24 by wahmane           #+#    #+#             */
/*   Updated: 2025/11/27 15:57:00 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

    #include "ScavTrap.hpp"

    ScavTrap::ScavTrap(void): ClapTrap("unknown")
    {
        this->_hitpoints = 100;
        this->_energypoints = 50;
        this->_attackpoints = 20;
        std::cout << "ScavTrap: " << this->_name << " Default constructor called" << std::endl;
    }

    ScavTrap::~ScavTrap()
    {
        std::cout << "ScavTrap: " << this->_name << " Destructor called" <<  std::endl;
    }

    ScavTrap::ScavTrap(std::string name): ClapTrap(name)
    {
        this->_hitpoints = 100;
        this->_energypoints = 50;
        this->_attackpoints = 20;
        std::cout << "ScavTrap: " << name << " Custom constructor called" << std::endl;
    }

    ScavTrap& ScavTrap::operator=(const ScavTrap& copy)
    {
        if (this != &copy)
        {
            ClapTrap::operator=(copy);
            std::cout << "ScavTrap: " << this->_name << " Copy assignment operator called" << std::endl;
        }
        return *this;
    }

    ScavTrap::ScavTrap(const ScavTrap& copy) : ClapTrap(copy)
    {
        std::cout << "ScavTrap: " << this->_name << " Copy constructor called" << std::endl;
    }

    void ScavTrap::attack(const std::string& target)
    {
        if (this->_hitpoints <= 0)
        {
            std::cout << "ScavTrap can't attack because i'm dead" << std::endl;
            return;
        }
        if (this->_energypoints <= 0)
        {
            std::cout << "ScavTrap can't attack because no energy left" << std::endl;
            return;
        }
        std::cout << "ScavTrap " << this->_name <<  " attacks " << target <<", causing " << this->_attackpoints << " points of damage!" << std::endl;
        this->_energypoints--;
    }

    void	ScavTrap::guardGate(void)
    {
        std::cout << "ScavTrap: " << this->_name << " is now in Gate keeper mode." << std::endl;
    }