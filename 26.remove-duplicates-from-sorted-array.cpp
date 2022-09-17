/*
 * @lc app=leetcode id=26 lang=cpp
 *
 * [26] Remove Duplicates from Sorted Array
 */

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size() - 1;
        sort(nums.begin(), nums.begin() + n);
        int count = 1;
        int k =1;
        for (int i = 1; i < nums.size(); i++)
        {
            if(nums[i] == nums[i-1]){
                continue;
            }
            else{
                nums[k] = nums[i];
                k++;
                count++;
            }
        }
        return k;
        
    }
};
// @lc code=end

