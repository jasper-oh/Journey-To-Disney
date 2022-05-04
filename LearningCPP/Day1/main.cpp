#include <iostream>

void otherOne() {
    auto result = (10 <= 20 ) > 0;
    std::cout << result << std::endl;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    otherOne();
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
