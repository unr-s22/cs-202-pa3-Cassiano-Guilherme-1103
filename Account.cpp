#include "Account.h"


Account::Account(Money money)
{
	mon = money;
}

void Account::makeDeposit(Money mon)
{
	md.push_back(mon);
	balanceChange = true;
	mon = md[0] + md[1] + md[2];
	std::cout<<mon<<std::endl;
}





void Account::makeWithdrawals(Money mon)
{
	mw.push_back(mon);
	balanceChange = true;
}




std::ostream& operator << (std::ostream& os, Account& account)
{
	os<<"Account Details"<<std::endl;
	os<<"--------------------------"<<std::endl;
	os<<"Current Balance: "<< account.mon <<std::endl;
	os<<"--------------------------"<<std::endl;
	os<<"Number of Deposits: " << account.md.size() <<std::endl;
	os<<"--------------------"<<std::endl;
	for (auto i : account.md )
	{
        	std::cout<< i;
        }
	os<<"--------------------------"<<std::endl;
	os<<"Number of Withdrawals: " <<account.mw.size()<<std::endl;
	os<<"--------------------------"<<std::endl;
	for (auto i : account.mw )
	{
        	std::cout<< i;
        }
	os<<"----"<<std::endl;

	return os;
} 




