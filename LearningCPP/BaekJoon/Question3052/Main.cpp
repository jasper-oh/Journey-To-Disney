//
// Created by Jasper Oh on 2024-10-27.
//
#include <iostream>
#include <unordered_set>

using namespace std;
int main() {
    int a;
    unordered_set<int> intSet;

    for(int i = 0; i < 10; i++) {
        cin >> a;
        intSet.insert(a % 42);
    }

    cout << intSet.size() << endl;
}