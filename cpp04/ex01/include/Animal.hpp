/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 15:03:13 by hwahmane          #+#    #+#             */
/*   Updated: 2025/12/23 16:06:39 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Animal
{
    protected:
        std::string type;
    public:
        Animal(void);
        virtual ~Animal(void);
        Animal(const Animal &copy);
        Animal &operator = (const Animal &copy);

        const std::string	getType() const;
        virtual void makeSound() const;
};
