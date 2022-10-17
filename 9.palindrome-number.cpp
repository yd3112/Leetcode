/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0){
            return false;
        }
        else if(x < 9){
            return true;
        }
        else{
            long long int sum = 0;
            long long int y = x;
            while(y!= 0){
                int digit = y%10;
                sum = sum *10 + digit;
                y = y/10;
            }
            if(sum == x){
                return true;
            }
            else{
                return false;
            }
        }
    }
};
// @lc code=end

