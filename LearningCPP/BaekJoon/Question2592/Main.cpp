//
// Created by Jasper Oh on 2024-10-09.
//

#include "Main.hpp"
#include <iostream>


using namespace std;
int main() {
    int sum = 0;
    int a = 0;
    int max = 0;
    int maxidx = 0;
    int* arr = new int[100];
    for(int i = 0; i < 10; i++) {
        cin >> a;
        sum += a;
        arr[a / 10] += 1;
    }

    for(int i = 0; i < 100; i++) {
        if(max < arr[i]) {
            max = arr[i];
            maxidx = i;
        }
    }

    cout << sum / 10 << endl;
    cout << maxidx * 10;

    delete[] arr;

    return 0;
}