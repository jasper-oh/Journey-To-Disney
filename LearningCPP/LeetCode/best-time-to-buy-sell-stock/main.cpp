#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices){
        return 0;
    }

};


int main() {
    Solution sol;
    vector<int> prices {7,1,5,3,6,4};

    for(int x = 0 ; x < prices.size() ; x ++){
        cout << prices[x] << " ";
    };

    cout << sol.maxProfit(prices) << " ";
    return 0;
}



