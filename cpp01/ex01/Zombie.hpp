/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 16:23:47 by hwahmane          #+#    #+#             */
/*   Updated: 2025/10/17 18:12:47 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>


class Zombie
{
    private:
    std::string    _name;

    public:
    Zombie(void);
    Zombie(std::string name);
    ~Zombie();
    void announce( void );
    void name(std::string name);
};

Zombie* zombieHorde( int N, std::string name );
