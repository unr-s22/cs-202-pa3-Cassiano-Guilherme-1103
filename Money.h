
#pragma once
#include <iostream>

class Money{
private:
   int dollars, cents;

public:
   Money();
   Money(int newDollars, int newCents);
//overload of ostream operator
   friend std::ostream& operator << (std::ostream& out, Money money);

//overload of math operators
   Money operator + (const Money& b);
   Money operator - (const Money& b);

//overload of all relation operators
   bool operator <(const Money& b);
   bool operator >(const Money& b);
   bool operator ==(const Money& b);
   bool operator <=(const Money& b);
   bool operator >=(const Money& b);
   bool operator !=(const Money& b);
//getters & setters
   int getCents();
   int getDollars();
   void setCents(int newCents);
   void setDollars(int newDollars);
};
