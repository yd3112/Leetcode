/*
 * @lc app=leetcode id=169 lang=cpp
 *
 * [169] Majority Element
 */

// @lc code=start
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ele , count = 0;
        for(int i = 0; i <nums.size(); i++){
            if(!count){
                ele = nums[i];
                count++;
            }
            else{
                if(nums[i] == ele){
                    count++;
                }
                else{
                    count--;
                }
            }
        }
        return ele;
    }
};
// @lc code=end

