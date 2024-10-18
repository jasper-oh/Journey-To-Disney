//
// Created by Jasper Oh on 2024-10-13.
//
#include <iostream>
#include <string>
using namespace std;
int main(){
    int n, p;
    string s;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> p >> s;
        cout << s.replace(p-1, 1, "") << "\n";
    }
}