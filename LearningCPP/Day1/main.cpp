#include <iostream>

void otherOne() {
    auto result = (10 <= 20 ) > 0;
    std::cout << result << std::endl;
}

void divideByZero(){
    int value = 9/0;
    std::cout << "value : " << value << std::endl;
//    1435483248
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
