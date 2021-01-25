/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroth-di <vroth-di@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 15:56:50 by vroth-di          #+#    #+#             */
/*   Updated: 2020/11/27 00:43:31 by vroth-di         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.class.hpp"

#include <iostream>
#include <ctime>
#include <iomanip>
#include <chrono>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
    _accountIndex = _nbAccounts;
    _amount = initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _nbAccounts++;
    _totalAmount += initial_deposit;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account()
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

int      Account::getNbAccounts( void ){
    return (_nbAccounts);}
int      Account::getTotalAmount( void ){
    return {_totalAmount};}
int      Account::getNbDeposits( void ){
    return (_totalNbDeposits);}
int      Account::getNbWithdrawals( void ){
    return (_totalNbWithdrawals);}

void     Account::_displayTimestamp(void)
{
time_t      rawtime;
    struct tm*  timeinfo;

    time (&rawtime);
    timeinfo = localtime (&rawtime);
    std::cout << '[';
    std::cout << 1900 + timeinfo->tm_year;
    std::cout << std::setw(2) << std::setfill('0') << timeinfo->tm_mon;
    std::cout << std::setw(2) << std::setfill('0') << timeinfo->tm_mday;
    std::cout << '_';
    std::cout << std::setw(2) << std::setfill('0') << timeinfo->tm_hour;
    std::cout << std::setw(2) << std::setfill('0') << timeinfo->tm_min;
    std::cout << std::setw(2) << std::setfill('0') << timeinfo->tm_sec;
    std::cout << "] ";
}

void     Account::displayAccountsInfos( void )
{
    _displayTimestamp();
    std::cout << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount();
    std::cout << ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit( int deposit )
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";deposit:";
    if (deposit < 0)
        std::cout << "refused" << std::endl;
    else
    {
        _amount += deposit;
        _totalAmount += deposit;
        ++_nbDeposits;
        ++_totalNbDeposits;
        std::cout << deposit << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
    }
}

bool	Account::makeWithdrawal( int withdrawal )
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:";
    if (_amount - withdrawal <= 0)
    {
        std::cout << "refused" << std::endl;
        return (false);
    }
    else
    {
        _amount -= withdrawal;
        _totalAmount -= withdrawal;
        ++_nbWithdrawals;
        ++_totalNbWithdrawals;
        std::cout << withdrawal << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
    }
    return (true);
}

void	Account::displayStatus( void ) const
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex;
    std::cout << ";amount:" << _totalAmount;
    std::cout << ";deposits:" << _totalNbDeposits;
    std::cout << ";withdrawals:" << _totalNbWithdrawals << std::endl;
} 