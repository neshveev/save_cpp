/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejommy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 20:26:24 by ejommy            #+#    #+#             */
/*   Updated: 2019/04/04 15:20:03 by ejommy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.class.hpp"
#include <ctime>
#include <iomanip>
#include <iostream>

int	Account::_nbAccounts;
int	Account::_totalAmount;
int	Account::_totalNbDeposits;
int	Account::_totalNbWithdrawals;

Account::Account( void )
{
	this->_accountIndex = _nbAccounts;
	this->_amount = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	_nbAccounts += 1;
}

Account::Account( int initial_deposit )
{
	this->_accountIndex = _nbAccounts;
	_totalAmount += initial_deposit;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	_nbAccounts += 1;
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";created" << std::endl;
}

Account::~Account( void )
{
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";closed" << std::endl;
	_nbAccounts -= 1;
	this->_accountIndex = 0;
	this->_amount = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
}

int	Account::getNbAccounts( void )
{
	return (_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

int		Account::checkAmount( void ) const
{
	return (this->_amount);
}

void	Account::makeDeposit( int deposit )
{
	this->_nbDeposits += 1;
	_totalAmount += deposit;
	_totalNbDeposits += 1;
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex;
	std::cout << ";p_amount:" << this->_amount;
	std::cout << ";deposit:" << deposit;
	this->_amount += deposit;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex;
	std::cout << ";p_amount:" << this->_amount;
	if (withdrawal > this->_amount)
	{
		std::cout << ";withdrawal:refused" << std::endl;
		return (false);
	}
	std::cout << ";withdrawal:" << withdrawal;
	this->_amount -= withdrawal;
	std::cout << ";amount:" << this->_amount;
	_nbWithdrawals += 1;
	std::cout << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	_totalNbWithdrawals += 1;
	_totalAmount -= withdrawal;
	return (true);
}

void	Account::_displayTimestamp( void )
{
	char		buf[18];
	std::time_t	t;
	std::tm		*time;

	t = std::time(NULL);
	time = localtime(&t);
	strftime(buf, 18, "[%Y%m%d_%H%M%S]", time);
	std::cout << buf;
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";deposits:" << this->_nbDeposits;
	std::cout << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << " accounts:" << getNbAccounts();
	std::cout << ";total:" << getTotalAmount();
	std::cout << ";deposits:" << getNbDeposits();
	std::cout << ";withdrawals:" << getNbWithdrawals() << std::endl;
}
