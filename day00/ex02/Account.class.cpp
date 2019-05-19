#include "Account.class.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>
Account::Account (int initial_deposit) : _accountIndex(Account::_nbAccounts), 
	_amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0) {

	Account::_nbAccounts += 1;
	Account::_totalAmount += initial_deposit;

	Account::_displayTimestamp();

	std::cout 
		<< "index:" << this->_accountIndex 
		<< ";amount:" << initial_deposit
		<< ";created" 
	<< std::endl; 
}
Account::Account () {}
Account::~Account () {
	Account::_displayTimestamp();
	std::cout 
		<< "index:" << this->_accountIndex
		<< ";amount:" << this->_amount
		<< ";closed"
	<< std::endl;
}

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
	std::cout 
		<< "accounts:" << Account::_nbAccounts
		<< ";total:" << Account::_totalAmount
		<< ";deposits:" << Account::_totalNbDeposits
		<< ";withdrawals:" << Account::_totalNbWithdrawals
	<< std::endl;


}
void 	Account::displayStatus () const {
		Account::_displayTimestamp();
			std::cout 
				<< "index:" << this->_accountIndex 
				<< ";amount:" << this->_amount
				<< ";deposits:" << this->_nbDeposits
				<< ";withdrawals:" << this->_nbWithdrawals
			<< std::endl; 
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
  			<< "] ";
}

void 	Account::makeDeposit (int deposit){
	Account::_displayTimestamp();
	std::cout 
		<< "index:" << this->_accountIndex 
		<< ";p_amount:" << this->_amount
		<< ";deposit:" << deposit;

	this->_amount += deposit;
	this->_nbDeposits += 1;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits += 1;
	std::cout 
		<< ";amount:" << this->_amount
		<< ";nb_deposits:" << this->_nbDeposits
	<< std::endl; 

}
bool 	Account::makeWithdrawal (int withdrawal) {
	Account::_displayTimestamp();
	std::cout 
		<< "index:" << this->_accountIndex 
		<< ";p_amount:" << this->_amount
	<< ";withdrawal:";

	if (withdrawal < this->_amount){

		this->_amount -= withdrawal;
		this->_nbWithdrawals += 1;
		Account::_totalAmount -= withdrawal;
		Account::_totalNbWithdrawals += 1;
		std::cout 
			<< withdrawal
			<< ";amount:" << this->_amount
			<< ";nb_withdrawals:" << this->_nbWithdrawals
		<< std::endl;
		return true;
	}
	std::cout << "refused" << std::endl;
	return false;
}
