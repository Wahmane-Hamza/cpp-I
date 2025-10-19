/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 11:56:12 by hwahmane          #+#    #+#             */
/*   Updated: 2025/10/19 15:10:52 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
# include <iostream>
# include <iomanip>
# include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts()
{
	return (Account::_nbAccounts);
}

int Account::getTotalAmount()
{
	return (Account::_totalAmount);
}

int Account::getNbDeposits()
{
	return (Account::_totalNbDeposits);
}

int Account::getNbWithdrawals()
{
	return (Account::_totalNbWithdrawals);
}

Account::Account(int initial_deposit)
{
	this->_accountIndex = getNbAccounts();
	_nbAccounts++;

	this->_amount = initial_deposit;
	_totalAmount += initial_deposit;

	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;

	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";"
            << "amount:" << this->_amount << ";"
            << "created" << std::endl;
}

void    Account::displayAccountsInfos()
{
    _displayTimestamp();
    std::cout << "accounts:" << getNbAccounts() << ";"
            << "total:" << getTotalAmount() << ";"
            << "deposits:" << getNbDeposits() << ";"
            << "withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit(int deposit)
{
    int amount_before = this->_amount;
    this->_amount += deposit;
    this->_nbDeposits++;
    this->_totalNbDeposits++;
    _totalAmount += deposit;
    
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";"
            << "p_amount:" << amount_before << ";"
            << "deposit:" << deposit << ";"
            << "amount:" << this->_amount << ";"
            << "nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
    if(checkAmount() - withdrawal < 0)
    {
        _displayTimestamp();
        std::cout << "index:" << this->_accountIndex << ";"
            << "p_amount:" << this->_amount << ";"
            << "withdrawal:" << "refused" << std::endl;
        return (false);
    }

    int amount_before = this->_amount;
    this->_amount -= withdrawal;
    this->_nbWithdrawals++;
    this->_totalNbWithdrawals++;
    _totalAmount -= withdrawal;

    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";"
            << "p_amount:" << amount_before << ";"
            << "withdrawal:" << withdrawal << ";"
            << "amount:" << this->_amount << ";"
            << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
    return (true);
}

int	Account::checkAmount() const
{
    return (this->_amount);
}

void	Account::displayStatus(void) const
{
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";"
            << "amount:" << this->_amount << ";"
            << "deposits:" << this->_nbDeposits << ";"
            << "withdrawals:" << this->_nbWithdrawals << std::endl;
}

void Account::_displayTimestamp()
{
    std::time_t now = std::time(NULL);
    std::tm *local = std::localtime(&now);
    std::cout << "[" << (local->tm_year + 1900)
        << std::setfill('0') << std::setw(2) << local->tm_mon + 1
        << std::setw(2) << local->tm_mday << "_"
        << std::setw(2) << local->tm_hour
        << std::setw(2) << local->tm_min
        << std::setw(2) << local->tm_sec << "] ";
}

Account::~Account( void )
{
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";"
            << "amount:" << this->_amount << ";"
            << "closed"  << std::endl;
}
