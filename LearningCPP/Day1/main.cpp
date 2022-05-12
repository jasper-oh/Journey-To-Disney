#include <iostream>

void otherOne() {
    auto result = (10 <= 20 ) > 0;
    std::cout << result << std::endl;
}

void divideByZero(){
    float value = 1435483248/0.0;
    std::cout << "value : " << value << std::endl;
//  why all the number divided by 0 make the same value : 1435483248?
//  I think the reason is by an integer, I changed to float than, value changed to inf.
}
int sumTwoNumbers(int number1, int number2){
    return number1 + number2;
}
int firstNumber{
    3
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    otherOne();
    divideByZero();
    std::cout << sumTwoNumbers(45,45) << std::endl;

    //that is the new way to make statements.
    //So what is the difference with "=" and make "{}" find in firstNumber
    int first_number {3};
    int second_number {7};
    std::cout << first_number + second_number <<std::endl;
    std::cout << firstNumber << std::endl;
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
