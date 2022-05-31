#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;


class Solution_1 {
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
/*
 * Ok, Solution_2 is using map for solve this problem!
 */
class Solution_2 {
public:
    vector<int> twoSum(vector<int>& nums, int target){
        vector<int> res;
        unordered_map<int, int> mp;

        for(int i=0; i <  nums.size(); i++){
            if(mp.find(target - nums[i]) != mp.end()){
                res.emplace_back(i);
                res.emplace_back(mp[target-nums[i]]);
                return res;
            }
            mp[nums[i]] = i;
        }
        return res;
    }
};

int main() {
    Solution_1 sol_1;
    Solution_2 sol_2;
    std::vector<int> nums;
    nums.push_back(2);
    nums.push_back(7);
    nums.push_back(11);
    nums.push_back(15);
    for (int x : sol_2.twoSum(nums, 9))
         cout << x << " ";

    
    for ( int i = 0 ; i < sol_1.twoSum(nums,9).size() ; i++){
        std::cout << sol_1.twoSum(nums, 9).emplace_back(i) << " ";
    };
    return 0;
}

// In this solution, I can learn about class, for loop, and vector. It just a small step for learning c++, but
// steady improve is my goal!
