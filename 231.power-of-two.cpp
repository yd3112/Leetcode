/*
 * @lc app=leetcode id=231 lang=cpp
 *
 * [231] Power of Two
 */

// @lc code=start
class Solution {
public:
    bool isPowerOfTwo(long long int n) {
        if(n == 0){
            return false;
        }
        n = n & (n - 1);
        if(!n)
            return true;
        else
            return false;
    }
};
// @lc code=end

