/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 21:56:37 by hwahmane          #+#    #+#             */
/*   Updated: 2025/10/17 22:33:00 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): _Weapon(NULL),_name(name){};

HumanB::~HumanB(){}

void HumanB::setWeapon(Weapon& Weapon)
{
    this->_Weapon = &Weapon;
}

const Weapon* HumanB::getWeapon() const
{
    return (this->_Weapon);
}

const std::string& HumanB::getName() const
{
    return (this->_name);
}

void HumanB::attack()
{
    if (this->getWeapon())
		std::cout << this->getName() << " attacks with their " << this->_Weapon->getType() << std::endl;
	else
		std::cout << this->getName() << " is unarmed" << std::endl;
}
