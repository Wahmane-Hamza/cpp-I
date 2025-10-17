/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 16:23:47 by hwahmane          #+#    #+#             */
/*   Updated: 2025/10/17 17:50:10 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>


class Zombie
{
    private:
    std::string    _name;
    
    public:
    Zombie(std::string name);
    ~Zombie();
    void announce( void );
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );
