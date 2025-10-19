/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 17:55:38 by hwahmane          #+#    #+#             */
/*   Updated: 2025/10/19 22:32:54 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    int i;
    if (N < 0)
    {
        std::cout << "N number less than 0" << std::endl;
        return (NULL);
    }
    Zombie* z = new Zombie[N];

    i = 0;
    while(i < N)
    {
        z[i].name(name);
        i++;
    }
    return (z);
}
