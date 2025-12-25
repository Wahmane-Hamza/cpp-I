/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 15:39:39 by hwahmane          #+#    #+#             */
/*   Updated: 2025/12/23 18:41:07 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAAnimal
{
    public:
        WrongCat(void);  
        ~WrongCat(void);
        WrongCat(const WrongCat &copy);
        WrongCat &operator = (const WrongCat &copy);

        void makeSound() const;
};
