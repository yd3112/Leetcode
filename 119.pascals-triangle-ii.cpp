/*
 * @lc app=leetcode id=119 lang=cpp
 *
 * [119] Pascal's Triangle II
 */

// @lc code=start
class Solution {
public:
    unsigned long long int fect(int n){
        if(n == 0 || n == 1){
            return 1;
        }
        unsigned long long int res = 1;
        for(int i = 2; i <= n; i++){
            res = res * i;
        }
        return res;
    }
    vector<int> getRow(int rowIndex) {
        vector<int> res;
        if(rowIndex == 0){
            res.push_back(1);
            return res;
        }
        if(rowIndex == 1){
            res.push_back(1);
            res.push_back(1);
            return res;
        }
        unsigned long long int n = fect(rowIndex);
        for(int i = 0; i <= (rowIndex); i++){
            int x = n/(fect(i) * fect(rowIndex - i));
            res.push_back(x);
        }
        return res;
    }
};
// @lc code=end

