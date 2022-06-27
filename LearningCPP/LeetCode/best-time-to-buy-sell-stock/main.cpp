#include <iostream>
#include <vector>

using namespace std;

/*
 * Today's agenda
 * 0. Understanding Vector, and connected method
 * 1. insert, delete, emplace_back() .. etc..
 * */

void understanding_vector(){
    vector<int> v = {1,2,3};
    vector<int> v1 = {10,11,12};

    v.emplace_back(4);
    v.emplace_back(5);

    for(int x = 0 ; x < v.size() ; x ++){
        cout << v[x] << " ";
    }
    cout << endl;


    // Insert the elements in the vector!
    v.insert(v.end() , 3 , 100);

    // Insert another vector
    v.insert(v.end() , v1.begin() , v1.end());

    // vector.insert(position, first_element, last_element)


    // other way to show the vector's inside?
    for (auto it = v.begin(); it != v.end(); ++it) {
        cout << *it << " ";
    }
}


class Solution {
public:
    // put the standard point in profit, and start for loop in first time.
    int maxProfit(vector<int>& prices){
       int profit = 0;
       // What is the role of the cp !
       int cp = prices[0];
       for(int i=1; i < prices.size() ; i++){
           profit = max(profit, prices[i] - cp);
           cp = min(cp, prices[i]);
       }
        return profit;
    }

};

// This is the easy way to solve the problem and more simple to understand
class AnotherSolution{
public:
    int maxProfit(vector<int>& prices){
        int i = 0;
        int j = 1;
        int n = prices.size();
        int profit = 0;
        while(j<n) {
            int temp = prices[j] - prices[i];
            if(temp){
                i = j;
            } else {
                j ++;
                profit = max(profit, temp);
            }
        }
        return profit;
    }
};


int main() {

//    understanding_vector();
    Solution sol;
    vector<int> prices {7,1,5,3,6,4};

    for(int x = 0 ; x < prices.size() ; x ++){
        cout << prices[x] << " ";
    };

    cout << sol.maxProfit(prices) << " ";
    return 0;
}





