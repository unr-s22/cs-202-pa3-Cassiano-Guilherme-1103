#include "Account.h"




void Account::makeDeposit(Money mon)
{
	std::vector<Money> md;
	md.push_back(mon);
}





void Account::makeWithdrawals(Money mon)
{
	std::vector<Money> mw;
	mw.push_back(mon);
}




std::ostream& operator << (std::ostream& os, const Account& a)
{
	std::cout<<"hi"<<std::endl;
} 




