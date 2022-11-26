/*
 * @lc app=leetcode id=69 lang=cpp
 *
 * [69] Sqrt(x)
 */

// @lc code=start
class Solution {
public:
    int mySqrt(int x) {
        if(x == 1)
            return 1;
        unsigned long long int high = x;
        unsigned long long int low = 1;
        unsigned long long int mid;
        for(int i = 0; i < 32; i++){
            mid = (high + low) /2;
            if(mid * mid == x)
                return mid;
            if(mid * mid > x){
                high = mid;
            }
            else if(mid * mid < x){
                low = mid;
            }
        }
        return mid;
    }
};
// @lc code=end

