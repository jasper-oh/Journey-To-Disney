//
// Created by Jasper Oh on 2024-11-19.
//
#include <iostream>
using namespace std;



class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        std::sort(nums.begin(), nums.end());
        int closestSum = 1e7;
        // nums[i] + nums[l] + nums[r] = target
        // nums[l] + nums[r] = target - nums[i]
        for (int i = 0; i < nums.size() - 2; i++) {
            int l = i + 1;
            int r = nums.size() - 1;
            while (l < r) {
                int sum = nums[i] + nums[l] + nums[r];
                if (sum == target) {
                    return target;
                }
                if (abs(target - sum) < abs(target - closestSum)) {
                    closestSum = sum; // relax the answer
                }
                if (sum < target) {
                    l++; // increase the sum
                } else {
                    r--; // decrease the sum
                }
            }
        }
        return closestSum;
    }
};

int main(){
  Solution sol;
  // vector<int> nums1 = {-1, 2, 1, -4};
  vector<int> nums2 = {0 ,0 ,0 ,0};
  cout << sol.threeSumClosest(nums2, 1);
}