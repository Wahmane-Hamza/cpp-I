/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 15:38:24 by hwahmane          #+#    #+#             */
/*   Updated: 2025/12/23 15:56:36 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal(void);
        ~WrongAnimal(void);
        WrongAnimal(const WrongAnimal &copy);
        WrongAnimal &operator = (const WrongAnimal &copy);

        const std::string	getType() const;
        void makeSound() const;
};