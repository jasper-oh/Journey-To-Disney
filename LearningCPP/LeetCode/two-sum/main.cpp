#include <iostream>
#include <vector>

using namespace std;


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
    std::vector<int> nums;
    nums.push_back(2);
    nums.push_back(7);
    nums.push_back(11);
    nums.push_back(15);
//    for (int x : sol.twoSum(nums, 9))
//         cout << x << " ";

    for ( int i = 0 ; i < sol.twoSum(nums,9).size() ; i++){
        std::cout << sol.twoSum(nums, 9).emplace_back(i) << " ";
    };
    return 0;
}
