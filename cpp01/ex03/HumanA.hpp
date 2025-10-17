/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 21:06:08 by hwahmane          #+#    #+#             */
/*   Updated: 2025/10/17 22:22:04 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanB.hpp"

class HumanA
{
private:
    Weapon& _Weapon;
    std::string _name;
public:
    HumanA(std::string name, Weapon& weapon);
    ~HumanA();
    void    attack();
    const std::string& getName() const;
};
