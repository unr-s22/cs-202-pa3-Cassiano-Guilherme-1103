#pragma once
#include "Money.h"
#include <vector>
class Account
{
	private:
	Money mon;

	public:
	Account(Money money): mon(money){}
	void makeDeposit(Money mon);
	void makeWithdrawals(Money mon);
	friend std::ostream& operator << (std::ostream& os, const Account& a);
	

};
