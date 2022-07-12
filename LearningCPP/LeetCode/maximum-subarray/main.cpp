#include <iostream>
#include <vector>

/*
 * Explanation -> Given an integer array nums, find the contiguous subarray
 * (Containing at least one number)
 * which has the largest sum and return its sum
 *
 * "A subarray is a contiguous part of an array."
 *
 * A solution will be dynamic programming.
 */

using namespace std;


class Solution{
public:
    int maxSubArray(vector<int>& nums){
        int best = nums[0];

        for(int i = 1; i < nums.size() ; i++){
            nums[i] = max(nums[i], nums[i] + nums[i-1]);
            best = max(best, nums[i]);
        }
        return best;
    }
};

int main() {
    Solution sol;

    vector<int> vec = {-2,-1,-3,4,-1,2,1,-5,4};

    cout << sol.maxSubArray(vec) << endl;

    return 0;
}
