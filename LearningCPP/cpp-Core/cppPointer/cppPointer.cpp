//
// Created by Jasper Oh on 2024-09-09.
//

#include <iostream>

using namespace std;

void swapPointer (int* arg1, int* arg2) {
    int temp = *arg1;
    *arg1 = *arg2;
    *arg2 = temp;
}


void swapArray (int arr1[], int arg1, int arg2) {
    //Proof that int arr1[] is actually pointer.
    cout << "Size of Array " << sizeof(arr1) << endl; // this will showing the pointer size. (8 bytes in my side)

    int temp{arr1[arg1]};
    arr1[arg1] = arr1[arg2];
    arr1[arg2] = temp;
}

void swapCallByValue (int m, int n) {
    int temp{m};
    m = n;
    n = temp;
}

int main() {

    // Not working. swapCallByValue just copying the value (Call by value)
    int k = 1;
    int p = 2;
    swapCallByValue(k, p);
    cout << k << ' ' << p << endl;

    // Working.
    int number[] = {1, 2, 3, 4};
    cout << "Size of Array " << sizeof(number) << endl; // 16 bytes
    swapArray(number, 0, 3);
    cout << number[0] << ' ' << number[1] << ' ' << number[2] << endl;

    // Working.
    int z = 10;
    int x = 11;
    swapPointer(&z, &x);
    cout << z << ' ' << x << endl;

    int a = 123;

    // address of a
    cout << a << " " << &a << endl;

    int* b = &a;

    // deference operator
    cout << b << " " << *b << endl;


    *b = 567;

    cout << a << " " << b << " " << *b << endl;

    size_t theSize = sizeof(a);
    cout << theSize << endl;

    return 0;
}