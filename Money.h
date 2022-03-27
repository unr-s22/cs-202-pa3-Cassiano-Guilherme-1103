
#pragma once
#include <iostream>

//The Account class will maintain a current balance, and have methods 
//for making deposits and withdrawals
/*
.Money Class
This class must store the its value in an integer that holds cents. It must include

* a constructor that takes dollars and cents (in two different arguments, both integers)
* a default constructor
* overloads of all the relational operators (<,>,<=,>=,!=,==)
* overloads of the math operators + and -
* an overload of the stream operator << to allow values to be printed like this:

[source, cpp]
----
Money m(100,10);
std::cout << m << std::endl;

// this should print the following
$100.33
----*/
class Money{
private:
    float balance, cents;
    int dollars;

public:
    Money(){}
    Money(int newDollars, int newCents);
    
};