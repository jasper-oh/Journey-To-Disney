#include <iostream>
#include <vector>

using namespace std;

class Solution{
public:
    bool containsDuplicate(vector<int>& nums){
        bool diagnosis = true;
        int count = 0;
        for (int x : nums){
            for (int y = 0 ; y < nums.size() ; y ++){
                if (x == nums[y]) {
                    count++;
                }
            }
        }
        if (count == nums.size()) {
            diagnosis = false;
        }
        return diagnosis;
    }
};

class Optimized_Solution{
public:
    bool containsDuplicate(vector<int>& nums){
        sort(nums.begin(), nums.end());

        for(int i=0;i<nums.size()-1;i++){
            if(nums[i] == nums[i+1])
                return true;
        }
        return false;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1,2,3,4,5};
//    bool something = false;
//    cout << something << endl;
    cout << sol.containsDuplicate(nums);

    return 0;
}
