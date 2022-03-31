#pragma once
#include "Money.h"
#include <vector>
#include <numeric>
class Account
{
	private:
	Money mon;
	std::vector<Money> md;
	std::vector<Money> mw;
	bool balanceChange = false;

	public:
	Account(Money);
	void makeDeposit(Money);
	void makeWithdrawals(Money);
	Money getBalance();
	friend std::ostream& operator << (std::ostream& os, Account& account);

};
