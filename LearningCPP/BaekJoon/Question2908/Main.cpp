//
// Created by Jasper Oh on 2024-10-08.
//

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
  int a = 0, b = 0;

  cin >> a >> b;
  string c = to_string(a);
  string d = to_string(b);

  reverse(c.begin(), c.end());
  reverse(d.begin(), d.end());

  a = stoi(c);
  b = stoi(d);

  cout << (a > b ? a : b) << endl;
}