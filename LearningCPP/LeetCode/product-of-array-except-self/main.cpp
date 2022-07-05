#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums){
        int n = nums.size();
        vector<int> res(n, 1);
        int prod = nums[0];
        for(int i=1;i<n;i++){
            res[i] = prod;
            prod*=nums[i];
        }
        prod = nums[n-1];
        for(int i=n-2;i>=0;i--){
            res[i]*=prod;
            prod*=nums[i];
        }

        return res;
    }
};


int main() {
    vector<int> nums {1,2,3,4};
    Solution sol;
    for ( int x : sol.productExceptSelf(nums) )
        cout << x << endl;
    return 0;
}


/*So what was done in the question, deeper understanding about vector was required, and more well used
    for looping is required
*/

