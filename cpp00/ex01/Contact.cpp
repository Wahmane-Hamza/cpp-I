/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 16:48:03 by hwahmane          #+#    #+#             */
/*   Updated: 2025/10/16 18:51:44 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void Contact::displayContact(void)
{
	std::cout << "First name     : " << first_name << std::endl;
	std::cout << "Last name      : " << second_name << std::endl;
	std::cout << "Nickname       : " << nick_name << std::endl;
	std::cout << "Phone number   : " << phone << std::endl;
	std::cout << "Darkest secret : " << darkest_secret << std::endl;
}

std::string	Contact::formatString(std::string str)
{
	size_t	len;

	len = str.length();
	if (len >= 10)
		return str.substr(0, 9) + ".";
	return (str);
}

void	Contact::displayField(std::string field)
{
	std::cout << '|';
	std::cout << std::setfill(' ') << std::setw(10) << formatString(field);
}
void Contact::displayColumn(int id)
{
	std::cout << std::setfill(' ') << std::setw(10) << id;
	displayField(first_name);
	displayField(second_name);
	displayField(nick_name);
	std::cout << std::endl;
}

Contact::Contact(void)
{
	this->first_name = "";
	this->second_name = "";
	this->nick_name = "";
	this->phone = "";
	this->darkest_secret = "";
}

// Parameterized constructor
Contact::Contact(std::string firstName, std::string lastName, std::string nickName,
			std::string phoneNumber, std::string darkestSecret)
{
	this->first_name = firstName;
	this->second_name = lastName;
	this->nick_name = nickName;
	this->phone = phoneNumber;
	this->darkest_secret = darkestSecret;
}

