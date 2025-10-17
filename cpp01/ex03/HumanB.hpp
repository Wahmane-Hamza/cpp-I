/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 21:10:29 by hwahmane          #+#    #+#             */
/*   Updated: 2025/10/17 22:18:32 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
private:
    Weapon* _Weapon;
    std::string _name;
public:
    HumanB(std::string name);
    ~HumanB();
    void    attack();
    const std::string& getName() const;
    const Weapon* getWeapon() const;
    void setWeapon(Weapon& Weapon);
};

