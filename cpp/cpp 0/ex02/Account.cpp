/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamorin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 09:18:33 by aamorin-          #+#    #+#             */
/*   Updated: 2021/10/21 10:53:44 by aamorin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <iostream>
#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

void	Account::makeDeposit( int deposit )
{
	this->_nbDeposits++;
	this->_amount += deposit;
	_totalAmount += deposit;
	_totalNbDeposits++;

	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";p_amount:" << this->_amount - deposit << ";deposits:"
		<< deposit << ";amount:" << this->_amount << ";nb_deposits:" << this->_nbDeposits << "\n";
}

int		Account::checkAmount( void ) const
{
	return (this->_amount);
}

int		Account::getTotalAmount( void )
{
	return (Account::_totalAmount);
}

int		Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}

int		Account::getNbDeposits(void)
{
	return (Account::_totalNbDeposits);
}
int		Account::getNbWithdrawals(void)
{
	return (Account::_totalNbWithdrawals);
}

bool	Account::makeWithdrawal( int withdrawal )
{
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";p_amount:" << this->_amount;
	if (withdrawal > this->_amount)
	{
		std::cout << ";withdrawal:refused" << "\n";
		return (false);
	}
	this->_nbWithdrawals++;
	_totalNbWithdrawals++;
	this->_amount -= withdrawal;
	_totalAmount -= withdrawal;
	std::cout << ";withdrawals:" << withdrawal << ";amount:" << this->_amount
		<< ";nb_withdrawals:" << this->_nbWithdrawals << "\n";
	return (true);
}

Account::Account( int initial_deposit ):
	_accountIndex(getNbAccounts()),
	_amount(initial_deposit),
	_nbDeposits(0),
	_nbWithdrawals(0)
{
	_nbAccounts++;
	_totalAmount += initial_deposit;

	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << "\n";

}

Account::~Account( void )
{
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << "\n";
	return ;
}

void	Account::_displayTimestamp( void )
{
	std::time_t t;
	t = std::time(0);
	std::tm* now = std::localtime(&t);
	std::cout << '[' << (now->tm_year + 1900) << (now->tm_mon + 1)
		<<  now->tm_mday << "_" << now->tm_hour
		<< now->tm_mday << now->tm_sec << "]";
}
void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:" <<
			this->_nbDeposits << ";withdrawals:"
			<< this->_nbWithdrawals << "\n";
}

void	Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout << " accounts:" << Account::getNbAccounts() << ";total:"
			<< Account::getTotalAmount() << ";deposits:" <<
			Account::getNbDeposits() << ";withdrawals:"
			<< Account::getNbWithdrawals() << "\n";
}
