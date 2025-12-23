/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 15:04:35 by hwahmane          #+#    #+#             */
/*   Updated: 2025/12/23 15:42:22 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Animal.hpp"

class Cat : public Animal
{
    public:
        Cat(void);  
        ~Cat(void);
        Cat(const Cat &copy);
        Cat &operator = (const Cat &copy);

        void makeSound() const;
};
