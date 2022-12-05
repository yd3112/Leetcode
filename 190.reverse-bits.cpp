/*
 * @lc app=leetcode id=190 lang=cpp
 *
 * [190] Reverse Bits
 */

// @lc code=start
class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        long long int x = 1 ,res = 0;

        for(int i = 0; i < 32; i++){
            if(n & (1 << 31-i)){
                res = res + x;
            }
            x =x *2;
        }
        return res;
    }
};
// @lc code=end

