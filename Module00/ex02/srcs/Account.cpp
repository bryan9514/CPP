/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 23:38:34 by brturcio          #+#    #+#             */
/*   Updated: 2025/12/07 16:42:47 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

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
	std::cout
		<< "index:" << _accountIndex
		<< ";amount:" << _amount
		<< ";Created" << std::endl;

}

void Account::_displayTimestamp()
{
	std::time_t	timeInSeg;
	std::tm		*timeWithFormat;
	char		outputDate[20];

	timeInSeg = std::time(NULL);
	timeWithFormat = std::localtime(&timeInSeg);
	strftime(outputDate, 20, "[%Y%m%d_%H%M%S]", timeWithFormat);
	std::cout << outputDate << " ";
}
