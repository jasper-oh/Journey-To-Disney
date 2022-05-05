#include <iostream>

void otherOne() {
    auto result = (10 <= 20 ) > 0;
    std::cout << result << std::endl;
}

void divideByZero(){
    int value = 7/0;
    std::cout << "value : " << value << std::endl;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    otherOne();
    divideByZero();
    return 0;
}

/*
 * fold-operator:
 *  <=
 *  relational-expression:
 *  relational-expression <= shift-expression
 *  operator:
 *  <=
 */
