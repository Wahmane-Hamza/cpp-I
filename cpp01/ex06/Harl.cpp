/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 17:18:30 by hwahmane          #+#    #+#             */
/*   Updated: 2025/10/19 12:00:50 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void){}

Harl::~Harl(){}

void Harl::debug( void )
{
    std::cout << "[DEBUG]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." 
    << std::endl << "I really do!" << std::endl;
    std::cout << std::endl;
}

void Harl::info( void )
{
    std::cout << "[INFO]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money." << std::endl
    << "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
    std::cout << std::endl;
}

void Harl::warning( void )
{
    std::cout << "[WARNING]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. " << std::endl
    << "I’ve been coming for years whereas you started working here since last month." << std::endl;
    std::cout << std::endl;

}

void Harl::error( void )
{
    std::cout << "[ERROR]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
    std::cout << std::endl;
}

void Harl::complain( std::string level )
{
    int i;

    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    void (Harl::*function[])(void) = 
    {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };

    i = 0;
    while (i < 4)
    {
        if (levels[i] == level)
        {
            (this->*function[i])();
            return;
        }
        i++;
    }
    std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

int Harl::level_num( std::string level )
{
    int i;

    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    i = 0;
    while (i < 4)
    {
        if (levels[i] == level)
        {
            return (i);
        }
        i++;
    }
    return (-1);
}

void Harl::harlFilter( std::string level )
{
    int level_number;

    level_number = Harl::level_num(level);
    switch (level_number)
    {
    case 0:
        Harl::complain("DEBUG");
    case 1:
        Harl::complain("INFO");
    case 2:
        Harl::complain("WARNING");
    case 3:
        Harl::complain("ERROR");
        break;
    default:
        Harl::complain(level);
        break;
    }
}
