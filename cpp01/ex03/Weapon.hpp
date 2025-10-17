/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 21:10:48 by hwahmane          #+#    #+#             */
/*   Updated: 2025/10/17 21:39:30 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Weapon
{
    private:
        std::string _type;

    public:
        Weapon(std::string type);
        ~Weapon();
        const std::string& getType() const;
        void    setType(std::string type);
};
