/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 17:44:48 by hwahmane          #+#    #+#             */
/*   Updated: 2025/12/23 18:04:40 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Brain
{
    private:
        std::string ideas[100];
    public:
        Brain(void);  
        ~Brain(void);
        Brain(const Brain &copy);
        Brain &operator = (const Brain &copy);

        const std::string	getIdea(int idx) const;
        void	setIdea(int idx, std::string& idea);
};

