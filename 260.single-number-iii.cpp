/*
 * @lc app=leetcode id=260 lang=cpp
 *
 * [260] Single Number III
 */

// @lc code=start
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long long int res = 0;
        for(int i = 0; i < nums.size(); i ++){
            res = res ^ nums[i];
        }
        res = res & ~(res - 1);
        int res1 = 0 , res2 = 0;
        for(int i = 0; i < nums.size(); i++){
            if(res & nums[i]){
                res1 = res1 ^ nums[i];
            }
            else{
                res2 = res2 ^ nums[i];
            }
        }
        vector <int> v;
        v.push_back(res1);
        v.push_back(res2);
        return v;
    }
};
// @lc code=end

