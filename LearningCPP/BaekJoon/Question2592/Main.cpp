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
    int* arrPtr = new int[100];
    for(int i = 0; i < 10; i++) {
        cin >> a;
        sum += a;
        *(arrPtr + a / 10) += 1;
    }

    for(int i = 0; i < 100; i++) {
        if(max < *(arrPtr + i)) {
            max = *(arrPtr + i);
            maxidx = i;
        }
    }

    cout << sum / 10 << endl;
    cout << maxidx * 10;

    delete arrPtr;

    return 0;
}