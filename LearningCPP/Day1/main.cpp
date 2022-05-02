#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

int otherone() {
    auto result = (10 <= 20 ) > 0;
    std::cout << result << std::endl;
}

/*
 * fold-operator:
 *  <=
 *  relational-expression:
 *  relational-expression <= shift-expression
 *  operator:
 *  <=
 */
