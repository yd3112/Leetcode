/*
 * @lc app=leetcode id=27 lang=cpp
 *
 * [27] Remove Element
 */

// @lc code=start
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;
        int count = 0;
        for(int i =0; i < nums.size(); i++){
            if(nums[i] == val){
                count++;
            }
            else{
                nums[k] = nums[i];
                k++;
            }
        }
        return nums.size() - count;
    }
};
// @lc code=end

