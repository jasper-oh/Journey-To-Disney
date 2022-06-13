#include <iostream>
#include <vector>

using namespace std;

/*
 * Today's agenda
 * 0. Understanding Vector, and connected method
 * 1. insert, delete, emplace_back() .. etc..
 * */

class Solution {
public:
    int maxProfit(vector<int>& prices){
        return 0;
    }

};

void understanding_vector(){
    vector<int> v = {1,2,3};

    v.emplace_back(4);
    v.emplace_back(5);

    for(int x = 0 ; x < v.size() ; x ++){
        cout << v[x] << " ";
    }

    // other way to show the vector's inside?

}


int main() {

    understanding_vector();
//    Solution sol;
//    vector<int> prices {7,1,5,3,6,4};
//
//    for(int x = 0 ; x < prices.size() ; x ++){
//        cout << prices[x] << " ";
//    };
//
//    cout << sol.maxProfit(prices) << " ";
    return 0;
}





