/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    map<int , int> m;
    vector<int> ans;
        for(int i =0; i < nums.size(); i++){
            int cur = nums[i];
            int x = target - cur;
            if(m.find(x) == m.end()){
                m.insert(pair<int,int>(cur , i));
            }
            else{
                
                ans.push_back(m[x]);
                ans.push_back(i);
                break;
            }
        }
        return ans;
    }
};
// @lc code=end

