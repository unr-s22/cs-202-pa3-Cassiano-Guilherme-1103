#include "Money.h"

//constructors
Money::Money(int newDollars, int newCents):dollars(newDollars), cents(newCents){
    if(cents >= 100){
        dollars = (dollars + (cents-cents%100)/100);
        cents = cents%100;
        
    }
    //add condition if cents/dollars is less than 0 
}

Money::Money(){
    dollars = 0;
    cents = 0;
}

//prints $dollars.cents
std::ostream& operator << (std::ostream& out, Money money){
    out << "$" << money.getDollars() << "." << money.getCents() << std::endl;
    return out;
}
//getters and setters
int Money::getCents(){
    return cents;
}
int Money::getDollars(){
    return dollars;
}

void Money::setCents(int newCents){
    dollars = newCents;
}
void Money::setDollars(int newDollars){
    dollars = newDollars;
}

//overload of math operators
float Money::operator + (const Money&b){
    float sum;
    int sumDollars, sumCents;

    sumCents = cents+b.cents;
    sumDollars = dollars+b.dollars;

    if ((cents + b.cents) >= 100 ){
        std::cout << dollars << b.dollars << std::endl;        
        sumDollars += ((sumCents-sumCents%100)/100);
        sumCents = sumCents%100;     
    }

    else{
        std::cout << dollars << " - " << b.dollars << std::endl;
        sumDollars = dollars + b.dollars;
        sumCents = cents + b.cents;
    }
    sum = sumDollars + (sumCents * 0.01);
    return sum;
}
//overload of all relation operators

bool Money::operator <(const Money& b) {
    if(dollars < b.dollars) {
        return true;
    }
    if(dollars == b.dollars && cents < b.cents) {
        return true;
    }
         
    return false;
}
    
bool Money::operator >(const Money& b) {
    if(dollars > b.dollars) {
        return true;
    }
    if(dollars == b.dollars && cents > b.cents) {
        return true;
    }
         
    return false;
}

bool Money::operator ==(const Money& b) {
    if((dollars == b.dollars) && (cents == b.cents)) {
        return true;
    }

    return false;
}

bool Money::operator <=(const Money& b) {
    if(dollars < b.dollars) {
        return true;
    }
    if(dollars <= b.dollars && cents <= b.cents) {
        return true;
    }
         
    return false;
}

bool Money::operator >=(const Money& b) {
    if(dollars > b.dollars) {
        return true;
    }
    if(dollars >= b.dollars && cents >= b.cents) {
        return true;
    }
         
    return false;
}

bool Money::operator !=(const Money& b) {
    if(dollars != b.dollars || cents != b.cents) {
        return true;
    }
         
    return false;
}
