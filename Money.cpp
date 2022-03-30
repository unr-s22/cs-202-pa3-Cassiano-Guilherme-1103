#include "Money.h"

//constructors
Money::Money(int newDollars, int newCents):dollars(newDollars), cents(newCents){
    if(cents >= 100){
        dollars = (dollars + (cents-cents%100)/100);
        cents = cents%100;
        
    }
}

Money::Money(){
    dollars = 0;
    cents = 0;
}

//prints $dollars.cents (prints negative bal if dollars || cents = negative)

std::ostream& operator << (std::ostream& out, Money money){
    bool isNeg;
    float totalCents;

    totalCents = money.dollars * 100 + money.cents;
    if (totalCents < 0 ){
        isNeg = true;
    }
// if cents are between 0 & -10 adds 0 in tenths place
    if(isNeg){
        if((money.cents < 0) && (money.cents > -10)){
            out << "-$" << abs(money.getDollars()) << ".0" << abs(money.getCents()) << std::endl;
        }
        else{
            out << "-$" << abs(money.getDollars()) << "." << abs(money.getCents()) << std::endl;
        }
    }
// if cents are between 0 & 10 adds 0 in tenths place
    else{
        if((money.cents > 0) && (money.cents < 10)){
            out << "$" << abs(money.getDollars()) << ".0" << abs(money.getCents()) << std::endl;
        }
        else{
            out << "$" << abs(money.getDollars()) << "." << abs(money.getCents()) << std::endl;
        }       
    }

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
//overloaded math operators
Money Money::operator + (const Money&b){
    int sumDollars = 0, sumCents = 0;
    float num1, num2, sum;

    num1 = dollars + (cents*0.01);
    num2 = b.dollars + (b.cents*0.01);
    sum = num1 + num2;

    sumDollars = sum;
    sumCents = (float(sum) - int(sum))*100;

    return Money (sumDollars, sumCents);

}


Money Money::operator - (const Money & b){

    int diffDollars = 0, diffCents = 0, totalCents1 = 0, totalCents2 = 0;
    float num1, num2, diff;
    num1 = dollars + (cents*0.01);
    num2 = b.dollars + (b.cents*0.01);
    diff = num1 - num2;

    diffDollars = diff; //truncated
    diffCents = (float(diff) - int(diff))*100; //float - truncated num*100

    return Money (diffDollars, diffCents);
}

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
