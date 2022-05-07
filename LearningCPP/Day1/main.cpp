#include <iostream>

void otherOne() {
    auto result = (10 <= 20 ) > 0;
    std::cout << result << std::endl;
}

void divideByZero(){
    float value = 1435483248/0.0;
    std::cout << "value : " << value << std::endl;
//  why all the number divided by 0 make the same value : 1435483248?
//  I think the reason is by a integer, I changed to float than, value changed to inf.
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
