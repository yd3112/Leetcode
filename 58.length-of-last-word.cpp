/*
 * @lc app=leetcode id=58 lang=cpp
 *
 * [58] Length of Last Word
 */

// @lc code=start
class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = 0 , tail = s.length() - 1; 
        while(tail >= 0 && s[tail] == ' '){
            tail --;
        }
        while(tail >=0 && s[tail] != ' ' ){
            len++;
            tail--;
        }
        return len;
    }
};
// @lc code=end

