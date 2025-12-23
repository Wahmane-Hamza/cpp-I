/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 15:04:35 by hwahmane          #+#    #+#             */
/*   Updated: 2025/12/23 18:41:07 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
    private:
		Brain	*_brain;
    public:
        Cat(void);  
        ~Cat(void);
        Cat(const Cat &copy);
        Cat &operator = (const Cat &copy);

        void makeSound() const;
        const std::string	getIdea(int idx) const;
        void	setIdea(int idx, std::string& idea);
};
