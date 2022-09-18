/*
 * @lc app=leetcode id=88 lang=cpp
 *
 * [88] Merge Sorted Array
 */

// @lc code=start
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int index1 = 0;
        int index2 = 0;
        vector<int> ans;
        while(index1 < m && index2 < n ){
            if(nums1[index1] <= nums2[index2]){
                ans.push_back(nums1[index1]);
                index1++;
            }
            else{
                ans.push_back(nums2[index2]);
                index2++;
            }
        }
        while (index1 < m)
        {
            ans.push_back(nums1[index1]);
            index1++;
        }
        while (index2 < n)
        {
            ans.push_back(nums2[index2]);
            index2++;
        }

        for(int i =0; i < ans.size(); i++){
            nums1[i] = ans[i];
        }
        
    }
};
// @lc code=end

