/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 16:02:30 by hwahmane          #+#    #+#             */
/*   Updated: 2025/11/28 17:30:40 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{

	// ============================== ClapTrap Test ==============================
    ClapTrap bot1("Alpha");
    ClapTrap bot2("Bravo");
    ClapTrap bot3(bot2);

    bot1.attack("Bravo");
    bot3.takeDamage(5);
    bot3.beRepaired(3);
    bot3.attack("Alpha");
    for (int i = 0; i < 10; i++)
        bot1.attack("Bravo");
    bot1.attack("Bravo");
    bot1.beRepaired(5);


    // ============================== ScavTrap Test ==============================
    ScavTrap scav("Guardian");

    scav.attack("intruder");
    scav.takeDamage(30);
    scav.beRepaired(20);
    scav.guardGate();

    std::cout << "----- Copy & assignment tests -----" << std::endl;
    ScavTrap scav2(scav);
    ScavTrap scav3("temp");
    scav3 = scav;

	// ============================== FragTrap Test ==============================
	FragTrap F1("Beta");
	F1.attack("Enemy1");
	F1.highFivesGuys();
    FragTrap F2("Charlie");
	FragTrap F3(F2);
    F3.takeDamage(100);
    F3.takeDamage(10);

	return (0);
}
