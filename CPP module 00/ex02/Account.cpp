/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkasandr <lkasandr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 10:02:41 by lkasandr          #+#    #+#             */
/*   Updated: 2021/08/26 11:14:35 by lkasandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

int Account::_nbAccounts;
int Account::_totalAmount;
int Account::_totalNbDeposits;
int Account::_totalNbWithdrawals;

Account::Account(int initial_deposit)
{
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	_amount = initial_deposit;
	_totalAmount += _amount;
	_totalNbDeposits = 0;
	_totalNbWithdrawals = 0;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	
	_displayTimestamp();
	std::cout << "index:" << _accountIndex 
	<< ";amount:" << _amount 
	<< ";created" << std::endl;
}

Account::Account(void)
{
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	_amount = 0;
	_totalNbDeposits = 0;
	_totalNbWithdrawals = 0;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
	<< ";created" << std::endl;
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex 
	<< ";amount:" << _amount 
	<< ";closed" << std::endl;
}

int Account::getNbAccounts(void)
{
	return (_nbAccounts);	
}

int Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

void Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() 
	<< ";total:" << getTotalAmount() 
	<< ";deposits:" << getNbDeposits()
	<< ";withdrawals:" << getNbWithdrawals() 
	<< std::endl;
}

void Account::makeDeposit(int deposit)
{
	_totalNbDeposits++;
	_totalAmount += deposit;
	_nbDeposits += 1;
	_displayTimestamp();
	
	std::cout << "index:" << _accountIndex 
	<< ";p_amount:" << _amount
	<< ";deposit:" << deposit
	<< ";amount:" << _amount + deposit
	<< ";nb_deposits:" << _nbDeposits
	<< std::endl;

	_amount += deposit;
}

bool Account::makeWithdrawal(int withdrawal)
{	
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:"; 
	if (withdrawal > _amount)
		std::cout << "refused";
	else
	{
		_nbWithdrawals += 1;
		std::cout << withdrawal 
		<< ";amount:" << _amount - withdrawal
		<< ";nb_withdrawals:" << _nbWithdrawals;
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		_totalNbWithdrawals++;
	}
	std::cout << std::endl;
	return (0);
}

int Account::checkAmount(void) const
{
	return (0);
}

void Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex 
	<< ";amount:" << _amount
	<< ";deposits:" << _nbDeposits
	<< ";withdrawals:" << _nbWithdrawals
	<< std::endl;
}

void	Account::_displayTimestamp(void)
{
	time_t now = time(0);

	tm *ltm = localtime(&now);
	std::cout << "[" << std::setfill('0')  << 1900 + ltm->tm_year 
	<< std::setw(2) << 1 + ltm->tm_mon << std::setw(2)
	<< ltm->tm_mday << "_" << std::setw(2)
	<< ltm->tm_hour << std::setw(2) 
	<< ltm->tm_min << std::setw(2)
	<< ltm->tm_sec << "] ";
}