/*
 * Using Binary-Search
 */

#include <iostream>
#include <vector>

using namespace ::std;

class Solution {
public:
    /*
     * find a difference between two method.
     */
    int findMin(vector<int>& nums){
        int n = nums.size();
        // 1st question -> why this function declare two different variable?
        int start=0, end=n-1;
        int s = start, e = end;
        int mid, prev, next;
        while(start<=end){
            mid = start+((end-start)/2);
            prev = (mid+n-1)%n;
            next = (mid+1)%n;
            if(nums[mid] <= nums[prev] && nums[mid] <=nums[next]){
                return nums[mid];

            }
            if(nums[s] <= nums[mid] && nums[mid] <= nums[e]){
                return nums[s];
            }
            else if(nums[mid] <= nums[e]){
                end= mid-1;
            }
            else
                start= mid+1;
            }
        return -1;
    }

    int findMin_1(vector<int>& nums){
        int start = 0;
        int end = nums.size()-1;
        int mid;

        while(start<end){
            mid = start + (end-start)/2;
            int prev = mid - 1;
            if(mid > 0 && nums[mid] < nums[prev])
                return nums[mid];
            else if (nums[start] <= nums[mid] && nums[mid] > nums[end])
                start = mid + 1;
            else
                end = mid - 1;
        }
        return nums[start];
    }
};



int main() {
    vector<int> nums = {3,4,5,1,2};

    Solution sol;
//    int minNum = sol.findMin(nums);
    int minNum_1 = sol.findMin_1(nums);

    cout << minNum_1 << endl;
    return 0;
}

/*
 * Input: nums = [3,4,5,1,2]
 * Output: 1
 * Explanation: The original array was [1,2,3,4,5] rotated
 * 3 times.
 */