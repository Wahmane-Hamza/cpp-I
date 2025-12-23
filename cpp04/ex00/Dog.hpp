/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 15:04:30 by hwahmane          #+#    #+#             */
/*   Updated: 2025/12/23 16:00:14 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal
{
    public:
        Dog(void);  
        ~Dog(void);
        Dog(const Dog &copy);
        Dog &operator = (const Dog &copy);

        void makeSound() const;
};
