/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 15:04:30 by hwahmane          #+#    #+#             */
/*   Updated: 2025/12/23 18:05:07 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
		Brain	*_brain;
    public:
        Dog(void);  
        ~Dog(void);
        Dog(const Dog &copy);
        Dog &operator = (const Dog &copy);

        void makeSound() const;
        const std::string	getIdea(int idx) const;
        void	setIdea(int idx, std::string& idea);
};
