/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 21:15:51 by hwahmane          #+#    #+#             */
/*   Updated: 2025/10/17 21:39:11 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"


Weapon::Weapon(std::string type): _type(type) {}

Weapon::~Weapon(){}

void    Weapon::setType(std::string type)
{
    this->_type = type;
}

const std::string& Weapon::getType() const
{
    return (this->_type);
}
