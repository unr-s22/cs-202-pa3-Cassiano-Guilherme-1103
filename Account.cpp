#include "Account.h"


Account::Account(Money money)
{
	mon = money;
}

void Account::makeDeposit(Money money)
{
	md.push_back(money);
	balanceChange = true;

}





void Account::makeWithdrawals(Money money)
{
	mw.push_back(money);
	balanceChange = true;		
}




std::ostream& operator << (std::ostream& os, Account& account)
{
	os<<"Account Details"<<std::endl;
	os<<"--------------------------"<<std::endl;
	os<<"Current Balance: "<< account.getBalance() <<std::endl;
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

Money Account::getBalance()
{
	Money monPlus;
	Money monMinus;
	Money monTotal;
	if (balanceChange == false)
	{
		return mon;
	}
	if (balanceChange == true)
	{
		for(auto i :md)
		{
			monPlus = monPlus + i;
		}
		for(auto i :mw)
		{
			monMinus = monMinus - i;
		}
		monTotal = monPlus + monMinus;
		return mon + monTotal;
	}
}


