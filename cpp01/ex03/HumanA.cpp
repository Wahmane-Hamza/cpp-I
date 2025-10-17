/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 21:25:08 by hwahmane          #+#    #+#             */
/*   Updated: 2025/10/17 22:26:57 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon):  _Weapon(weapon), _name(name){};

HumanA::~HumanA(){}

const std::string& HumanA::getName() const
{
    return (this->_name);
}

void HumanA::attack()
{
    std::cout << HumanA::getName() << " attacks with their " << this->_Weapon.getType() << std::endl;
}
