/*
 * @lc app=leetcode id=78 lang=cpp
 *
 * [78] Subsets
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        int size = pow(2 , nums.size());
        for(int i = 0; i < size; i++){
            vector <int> temp;
            for(int j = 0; j < nums.size(); j++){
                if( i & (1 << j))
                    temp.push_back(nums[j]);
            }
            res.push_back(temp);
        }
        return res;
    }
};
// @lc code=end

