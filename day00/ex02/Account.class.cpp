#include "Account.class.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>
Account::Account (int initial_deposit) {}
Account::Account () {}
Account::~Account () {}

int 	Account::_nbAccounts;
int 	Account::_totalNbDeposits;
int 	Account::_totalNbWithdrawals;
int 	Account::_totalAmount;

int 	Account::checkAmount () const {
    return this->_amount;
}
int 	Account::getNbAccounts () {
	 return Account::_nbAccounts;
}
int 	Account::getNbDeposits () {
	return Account::_totalNbDeposits;
}
int 	Account::getNbWithdrawals () {
	return Account::_totalNbWithdrawals;
}
int 	Account::getTotalAmount () {
	return  Account::_totalAmount;
}
void 	Account::displayAccountsInfos () {
	Account ::_displayTimestamp();
}
void 	Account::displayStatus () const {

}
void 	Account::_displayTimestamp () {
	time_t rawtime;
  	struct tm *timeinfo;

  	time(&rawtime);
  	timeinfo = localtime(&rawtime);

  	std::cout << "[" 
  			<< timeinfo->tm_year + 1900
  			<< std::setfill('0') << std::setw(2) << timeinfo->tm_mon + 1
  			<< std::setfill('0') << std::setw(2) << timeinfo->tm_mday
  			<< "_"
  			<< std::setfill('0') << std::setw(2) << timeinfo->tm_hour
  			<< std::setfill('0') << std::setw(2) << timeinfo->tm_min
  			<< std::setfill('0') << std::setw(2) << timeinfo->tm_sec
  			<< "]"
  	<< std::endl;

}

void 	Account::makeDeposit (int deposit) {}
bool 	Account::makeWithdrawal (int withdrawal) {}
