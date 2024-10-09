//
// Created by Jasper Oh on 2024-10-09.
//

#include <iostream>

using namespace std;
int main() {
    int a = 0 , b = 0, c = 0;
    cin >> a >> b >> c;

    const int d = a * b * c;

    int *array = new int[10];

    for (int i = d ; i > 0 ; i /=10) {
        array[i%10]++;
    }

    for (int i = 0; i < 10; i++) {
        cout << array[i] << endl;
    }

    delete[] array;
 }