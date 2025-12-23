/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 17:46:59 by hwahmane          #+#    #+#             */
/*   Updated: 2025/12/23 18:33:09 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
    std::cout << "Brain Default constructor called" << std::endl;
}

Brain::~Brain(void)
{
    std::cout << "Brain Destructor called" <<  std::endl;
}

Brain::Brain(const Brain& copy)
{
    *this = copy;
    std::cout << "Brain Copy constructor called" << std::endl;
}

Brain&	Brain::operator=(const Brain& copy)
{
	std::cout << "Brain Copy assignment operator called" << std::endl;
	if (this != &copy)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = copy.ideas[i];
	}
	return (*this);
}

const std::string	Brain::getIdea(int idx) const
{
	if (idx >= 0 && idx < 100)
		return (this->ideas[idx]);
	else
	{	
		std::cout << "Index: " << idx << " out of range" << std::endl;
		return ("");
	}
}

void	Brain::setIdea(int idx, std::string& idea)
{
	if (idx >= 0 && idx < 100)
		this->ideas[idx] = idea;
	else
		std::cout << "Index: " << idx << " out of range" << std::endl;
}
