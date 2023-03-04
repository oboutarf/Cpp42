/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 23:41:45 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/04 02:37:53 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <string>

int Account::_nbAccounts;
int Account::_totalAmount;
int Account::_totalNbDeposits;
int Account::_totalNbWithdrawals;



Account::~Account( void )
{
	std::cout << "[";
	_displayTimestamp();
	std::cout << "]"
	<< "index:" << _accountIndex \
	<< ";amount:" << _amount \
	<< ";closed" << std::endl;
	return ;
}

int Account::getNbAccounts( void )
{
	return ( _nbAccounts );
}

Account::Account( int initial_deposit ) :
_amount(initial_deposit),
_nbDeposits(0),
_nbWithdrawals(0)
{
	_accountIndex = _nbAccounts;
	std::cout << "[";
	_displayTimestamp();
	std::cout << "]"
	<< "index:" << _accountIndex \
	<< ";amount:" << initial_deposit \
	<< ";created;" << std::endl;
	_totalAmount += initial_deposit;
	_nbAccounts += 1;
}

void Account::_displayTimestamp( void )
{
	struct tm 	*timeinfo;
	time_t 		rawtime;
	char 		buffer[80];

	time (&rawtime);
	timeinfo = localtime (&rawtime);
	strftime( buffer, 80, "%Y%m%d_%H%M%S",timeinfo);
	std::cout << buffer;
}



bool Account::makeWithdrawal( int withdrawal )
{
	if ((_amount - withdrawal) <= 0)
	{
		std::cout << "[";
		_displayTimestamp();
		std::cout << "]" \
		<< "index:" << _accountIndex \
		<< ";p_amount:" << _amount \
		<< ";withdrawal:" << "refused" \
		<< std::endl;
		return (1);
	}
	_amount -= withdrawal;
	_nbWithdrawals += 1;
	std::cout << "[";
	_displayTimestamp();
	std::cout << "]" \
	<< "index:" << _accountIndex \
	<< ";p_amount:" << _amount + withdrawal\
	<< ";withdrawal:" <<  withdrawal \
	<< ";amount:" << _amount \
	<< ";nb_withdrawals:" << withdrawal \
	<< std::endl;
	return (0);

}

void Account::makeDeposit( int deposit )
{
	_amount += deposit;
	_nbDeposits += 1;
	std::cout << "[";
	_displayTimestamp();
	std::cout << "]" \
	<< "index:" << _accountIndex \
	<< ";p_amount:" << ( _amount - deposit ) \
	<< ";deposit:" << deposit \
	<< ";amount:" << _amount \
	<< ";nb_deposits:" << _nbDeposits
	<< std::endl;
}

void Account::displayStatus( void ) const
{
	std::cout << "[";
	_displayTimestamp();
	std::cout << "]" \
	<< "index:" << _accountIndex \
	<< ";amount:" << _amount \
	<< ";deposits:" << _nbDeposits \
	<< ";withdrawals:" << _nbWithdrawals \
	<< std::endl;
}

void Account::displayAccountsInfos( void )
{
	std::cout << "[";
	_displayTimestamp();
	std::cout << "]" \
	<< "accounts:" << _nbAccounts \
	<< ";total:" << _totalAmount \
	<< ";deposits:" << _totalNbDeposits \
	<< ";withdrawals:" << _totalNbWithdrawals \
	<< std::endl;
}
