/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 15:03:13 by hwahmane          #+#    #+#             */
/*   Updated: 2025/12/23 18:40:15 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class AAnimal
{
    protected:
        std::string type;
    public:
        AAnimal(void);
        virtual ~AAnimal(void);
        AAnimal(const AAnimal &copy);
        AAnimal &operator = (const AAnimal &copy);

        const std::string	getType() const;
        virtual void makeSound() const = 0;
};
