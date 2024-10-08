//
// Created by Jasper Oh on 2024-10-08.
//

#include <iostream>

using namespace std;

int main() {
    int in = 0, out = 0, biggestTotal = 0 , biggest = 0;
    for(int i = 0; i < 20; i++) {
        cin >> out >> in;
        biggest += -out + in;
        if (biggestTotal < biggest) {
            biggestTotal = biggest;
        }
        i++;
    }
    cout << biggestTotal;
 }