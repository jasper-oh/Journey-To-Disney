#include <iostream>
#include <vector>

using namespace std;

class realSolution{
public:
    int maxProduct(vector<int>& nums){
        int ans=nums[0], imax=ans, imin=ans;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] < 0){
                swap(imax, imin);
            }
            imax = max(nums[i], imax * nums[i]);
            imin = min(nums[i], imin * nums[i]);

            ans = max(ans, imax);
        }
        return ans;
    }
};

class Solution{
public:
    int maxProduct(vector<int>& nums){
        int maxNums = 0;

        for(int i = 1 ; i < nums.size() ; i ++){
            maxNums = max(maxNums, nums[i-1] * nums[i]);
        }

        return maxNums;

    }
};

int main() {

    vector<int> nums = {-2,0,-1};
    Solution sol;
    cout << sol.maxProduct(nums) << endl;


    return 0;
}
