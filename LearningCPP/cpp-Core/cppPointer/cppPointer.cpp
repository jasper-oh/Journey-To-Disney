//
// Created by Jasper Oh on 2024-09-09.
//

#include <iostream>

using namespace std;

int main() {
    int a = 123;

    // address of a
    cout << a << " " << &a << endl;

    int* b = &a;

    // deference operator
    cout << b << " " << *b << endl;


    *b = 567;

    cout << a << " " << b << " " << *b << endl;

    return 0;
}