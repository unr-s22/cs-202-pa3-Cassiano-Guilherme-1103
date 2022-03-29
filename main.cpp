
#include "Money.h"

int main(){
    Money a(1,21);
    Money b(1,80);
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
    std::cout << "$" << a.getDollars() << "."<< a.getCents() << std::endl;
    std::cout << "$" << b.getDollars() << "."<< b.getCents() << std::endl;

    std::cout <<"Overloaded stream operator ex: "<< a << std::endl;

    std::cout << (a+b) << std::endl;



    return 0;

}
