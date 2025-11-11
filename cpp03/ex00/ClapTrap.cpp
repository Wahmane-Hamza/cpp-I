/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wahmane <wahmane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 14:26:24 by wahmane           #+#    #+#             */
/*   Updated: 2025/11/11 14:32:39 by wahmane          ###   ########.fr       */
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

