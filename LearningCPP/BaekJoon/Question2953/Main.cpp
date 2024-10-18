//
// Created by Jasper Oh on 2024-10-17.
//
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int a;
    int b;
    int c;
    int d;
    int max = 0;
    int maxIdx = 0;
    int arr[] = {0, 0, 0, 0, 0};
    vector<int> newArr;

    for (int i = 0; i <= 4; i++) {
        cin >> a >> b >> c >> d;
        newArr.push_back(a);
        newArr.push_back(b);
        newArr.push_back(c);
        newArr.push_back(d);

        for (int j = 0 ; j < newArr.size(); j++) {
            arr[i] += newArr[j];
        }
        newArr.clear();
    }

    for (int i = 0; i < 5; i++) {
        if (max < arr[i]) {
            max = arr[i];
            maxIdx = i;
        }
    }

    cout << maxIdx + 1 << " " << max << endl;

}