/*
 * @lc app=leetcode id=35 lang=cpp
 *
 * [35] Search Insert Position
 */

// @lc code=start
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int index = nums.size();
        for (int i = 0; i < nums.size(); i++)
        {
            if(target == nums[i]){
                index = i;
                break;
            }
            else if(target < nums[i]){
                index = i;
                break;
            }
        }
        return index;
    }
};
// @lc code=end

