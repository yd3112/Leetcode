/*
 * @lc app=leetcode id=268 lang=cpp
 *
 * [268] Missing Number
 */

// @lc code=start
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int res = 0;
        for(int i = 0; i < nums.size(); i++){
            res = res ^ nums[i] ^ i;
        }
        res = res ^ nums.size();
        return res;
    }
};
// @lc code=end

