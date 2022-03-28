#include "Money.h"

Money::Money(int newDollars, int newCents):dollars(newDollars), cents(newCents){}

Money::Money(){}


//overload of math operators
//int Money::operator + (const Money&b){
 //   return 0;
//}
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
