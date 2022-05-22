#include <iostream>
#include <vector>


class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target){
        std::vector<int> vect;
        for (int i=0; i<nums.size();i++){
            for (int j = i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    vect.emplace_back(i);
                    vect.emplace_back(j);
                    break;
                }
            }
        }
        return vect;
    }
};


int main() {

    Solution sol;
    sol.twoSum( {2,7,11,15} , 9);
    return 0;
}
