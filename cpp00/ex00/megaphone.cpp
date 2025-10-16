/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 09:51:50 by hwahmane          #+#    #+#             */
/*   Updated: 2025/10/16 11:16:38 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void upper(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        str[i] = std::toupper(str[i]);
        i++;
    }
    
}

int main(int ac, char **av)
{
    int i;

    if (ac == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (-1);
    }
    i = 1;
    while (i < ac)
    {
        upper(av[i]);
        std::cout << av[i];
        i++;
    }
    std::cout << std::endl;
	return (0);
}