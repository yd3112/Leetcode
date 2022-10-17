/*
 * @lc app=leetcode id=13 lang=cpp
 *
 * [13] Roman to Integer
 */

// @lc code=start
class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> m = {
            {'I' , 1},
            {'V' , 5},
            {'X' , 10},
            {'L' , 50},
            {'C' , 100},
            {'D' , 500},
            {'M' , 1000},
        };
        int sum = m[s[0]];

        for(int i = 1; i < s.length(); i++){
            if(m[s[i]] > m[s[i-1]]){
                sum += m[s[i]] - 2*m[s[i-1]];
            }
            else{
                sum += m[s[i]];
            }
        }
        return sum;
    }
};
// @lc code=end

