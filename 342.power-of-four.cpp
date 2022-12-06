/*
 * @lc app=leetcode id=342 lang=cpp
 *
 * [342] Power of Four
 */

// @lc code=start
class Solution {
public:
    bool isPowerOfFour(int n) {

        if(n == 1){
            return true;
        }
        if(n < 4){
            return false;
        }
        if(n & (n - 1)){
            return false;
        }
        else{
            int count = 0;
            while(n > 0){
                n >>= 1;
                count++;
            }
            if(count % 2){
                return true;
            }
            else{
                return false;
            }
        }
    }
};
// @lc code=end

