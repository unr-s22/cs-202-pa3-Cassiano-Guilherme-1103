
#include "Money.h"

int main(){
    Money a(2,12);
    Money b(2,1);
//for testing overloaded relational operators
    if (a>b){
        std::cout << "a greater than b" <<std::endl;
    }

    if (a<b){
        std::cout << "a less than b" <<std::endl;
    }

    if (a>=b){
        std::cout << "a greater than or eq to b" <<std::endl;
    }

    if (a<=b){
        std::cout << "a less than or eq to b" <<std::endl;
    }

    if (a==b){
        std::cout << "a == b" <<std::endl;
    }

    if (a!=b){
        std::cout << "a does not equal b" <<std::endl;
    }

    return 0;
}
