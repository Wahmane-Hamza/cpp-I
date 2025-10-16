/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 16:49:21 by hwahmane          #+#    #+#             */
/*   Updated: 2025/10/16 16:49:45 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void	PhoneBook::getContactById(void)
{
	std::string	input;
	int			id;

	std::cout << "Enter the Contact id: ";
	while (true)
	{
		if (!getline(std::cin, input))
			exit(EXIT_FAILURE);
		if ((input.length() == 1) && std::isdigit(input[0]))
		{
			id = input[0] - '0';
			if (id < 0 || id > this->size - 1)
			{
				std::cout << "Contact id: " << id << " not found!\n";
				break ;
			}
			this->contacts[id].displayContact();
			break ;
		}
		else
		{
			std::cout << "Input error: Enter only digits: ";
			continue ;
		}
	}
}

void	PhoneBook::search(void)
{
	if (this->size == 0)
	{
		std::cout << "PhoneBook is empty\n";
		return ;
	}
	for (int i = 0; i < this->size; i++)
		this->contacts[i].displayColumn(i);
	this->getContactById();
}

PhoneBook::PhoneBook(void)
{
	this->index = 0;
	this->size = 0;
}

std::string	PhoneBook::input(std::string msg)
{
	std::string	var;

	while (true)
	{	
		std::cout << msg;
		if (!getline(std::cin, var))
		{
			if (std::cin.eof())
				exit(EXIT_FAILURE);
		}
		if (var.empty())
			continue ;
		return (var);
	}
}

bool	PhoneBook::add(void)
{
	std::string first_name = this->input("Type your First Name: ");
	if (first_name.empty()) return (false);
	std::string second_name = this->input("Type your Last Name: ");
	if (second_name.empty()) return (false);
	std::string nick_name = this->input("Type your Nick Name: ");
	if (nick_name.empty()) return (false);
	std::string phone = this->input("Type your Phone Name: ");
	if (phone.empty()) return (false);
	std::string darkest_secret = this->input("Type your Darkest Secret: ");
	if (darkest_secret.empty()) return (false);
	Contact	newContact(first_name, second_name, nick_name, phone, darkest_secret);

	contacts[index] = newContact;
	index++;
    if (index == 8)
        index = 0;
    if (size < 8)
    {
        size++;
    }
	return (true);
}
