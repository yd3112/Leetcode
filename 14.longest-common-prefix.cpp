/*
 * @lc app=leetcode id=14 lang=cpp
 *
 * [14] Longest Common Prefix
 */

// @lc code=start
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string output = "";
        int k = 0;
        while(k < strs[0].length()){
            for(int i = 0; i < strs.size(); i++){
                if(strs[i][k] != strs[0][k]){
                    return output;
                }
            }
            output.push_back(strs[0][k]);
            k++;
        }
        return output;
    }
};
// @lc code=end

