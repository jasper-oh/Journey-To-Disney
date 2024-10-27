//
// Created by Jasper Oh on 2024-10-27.
//
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int a ,b;
    int sum = 0;
    vector<int> intVector;

    cin >> a >> b;

    for(int i = 1; i <= b ; i++ ) {
        for(int j = 1; j <= i ; j++ ) {
            intVector.push_back(i);
        }
    }

    for(int i = a; i <= b ; i++ ) {
        sum += intVector[i - 1];
    }

    cout << sum << endl;
    return 0;
}