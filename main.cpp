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

//shows relational operators work - idk if we need to show this in our final push?
/*
	Money t1(101,33);
	Money t2(56,34);
	if(t1 > t2){
		std::cout << "t1 > t2" << std::endl;
	}
	
	if(t1 < t2){
		std::cout << "t1 < t2" << std::endl;
	}

	if(t1 >= t2){
		std::cout << "t1 >= t2" << std::endl;
	}
	
	if(t1 <= t2){
		std::cout << "t1 <= t2" << std::endl;
	}

	if(t1 == t2){
		std::cout << "t1 == t2" << std::endl;
	}
	
	if(t1 != t2){
		std::cout << "t1 != t2" << std::endl;
	}
*/
    return 0;
}		
