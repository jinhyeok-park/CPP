#include "Account.hpp"

int Account::_totalAmount = 0;
int	Account::_nbAccounts = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void ) {
    return Account::_nbAccounts;
};

int	Account::getTotalAmount( void ) {
    return Account::_totalAmount;
};

int	Account::getNbDeposits( void ) {
    return Account::_totalNbDeposits;
};

int	Account::getNbWithdrawals( void ) {
    return Account::_totalNbWithdrawals;
};

void    Account::displayAccountsInfos( void ) {
    _displayTimestamp();
    std::cout << "accounts:" << Account::getNbAccounts() << ";";
    std::cout << "total:" << Account::getTotalAmount() << ";";
    std::cout << "deposits:" << Account::getNbDeposits() << ";";
    std::cout << "withdrawals:" << Account::getNbWithdrawals() << std::endl;
};

Account::Account( int initial_deposit ) {
    this->_accountIndex = Account::_nbAccounts;
    this->_amount = initial_deposit;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "created" << std::endl; 
    Account::_nbAccounts++;
    Account::_totalAmount += initial_deposit;
};

Account::~Account( void ) {
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "closed" << std::endl;
};

void	Account::makeDeposit( int deposit ) {
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "p_amount:" << this->_amount << ";";
    std::cout << "deposit:" << deposit << ";";
    this->_amount += deposit;
    Account::_totalAmount += deposit;
    Account::_totalNbDeposits++;
    this->_nbDeposits++;
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "nb_deposits:" << _nbDeposits << std::endl;
};

bool	Account::makeWithdrawal( int withdrawal ) {
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "p_amount:" << this->_amount << ";";
    std::cout << "withdrawal:";
    if (this->_amount - withdrawal < 0)
    {
        std::cout << "refused" << std::endl;
        return false;
    }
    else
        std::cout << withdrawal << ";";
    this->_amount -= withdrawal;
    Account::_totalAmount -= withdrawal;
    Account::_totalNbWithdrawals++;
    this->_nbWithdrawals++;
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "nb_withdrawals:" << _nbWithdrawals << std::endl;
    return true;
};

int		Account::checkAmount( void ) const {
    return this->_amount;
};

void	Account::displayStatus( void ) const {
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "deposits:" << this->_nbDeposits << ";";
    std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
};

void	Account::_displayTimestamp( void ) {
    time_t      cur_time;
    struct tm*  time_info;
    char        buff[16];

    std::time(&cur_time);
    time_info = std::localtime(&cur_time);
    std::strftime(buff, sizeof(buff), "%Y%m%d_%H%M%S",time_info);
    std::cout << "[" << buff << "] ";
};

Account::Account( void ) {

};