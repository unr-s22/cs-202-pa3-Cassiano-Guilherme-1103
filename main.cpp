
#include "Money.h"

int main(){
    Money a(300,23);
    Money b(500,22);
//for testing overloaded relational operators

    std::cout <<"Overloaded stream operator ex: "<< a << std::endl;
    std::cout << a << std::endl;

    Money c = (a+b);

    std::cout << c;



    return 0;

}
