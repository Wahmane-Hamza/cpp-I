/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 16:23:50 by hwahmane          #+#    #+#             */
/*   Updated: 2025/10/17 18:13:42 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) {}

Zombie::Zombie(std::string name)
{
    this->_name =name;
}

Zombie::~Zombie()
{
    std::cout << "Zombie " << this->_name << " is late for work… because he’s dead." << std::endl;
}

void    Zombie::announce()
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::name(std::string name)
{
    this->_name =name;
}
