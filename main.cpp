#include "Account.h"
#include "Money.h"

int main(){
	Money m(300,23);
	Account acc(m);
	std::cout<<acc;
	acc.makeDeposit(Money(200,00));
	acc.makeDeposit(Money(300,24));
	acc.makeDeposit(Money(501,22));
	acc.makeWithdrawals(Money(300,10));
	acc.makeWithdrawals(Money(201,34));
	std::cout<<acc;
    return 0;
}		
