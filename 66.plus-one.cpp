/*
 * @lc app=leetcode id=66 lang=cpp
 *
 * [66] Plus One
 */

// @lc code=start
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int last = digits.size() -1 ;
        if(digits[last] != 9){
            digits[last] = digits[last] + 1;
        }
        else if(digits[last] == 9){
            int i = last;
            while(i >=0 && digits[i] == 9){
                digits[i] = 0;
                i--;
            }
            if(i < 0){
                digits[0] = 1;
                digits.push_back(0);
            }
            else{
                digits[i] = digits[i] + 1;
            }
        }
        return digits;
    }
};
// @lc code=end

