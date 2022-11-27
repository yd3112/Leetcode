/*
 * @lc app=leetcode id=2 lang=cpp
 *
 * [2] Add Two Numbers
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode *res = new ListNode();
        ListNode *cur = res;
        while(l1 && l2){
            res->next = new  ListNode((l1->val + l2->val + carry) %10);
            carry = (l1->val + l2->val + carry) >=10?(l1->val + l2->val + carry)/10: 0;
            l1 = l1->next;
            l2 = l2->next;
            res = res->next;
        }
        while(l1){
            res->next = new  ListNode((l1->val+ carry) %10);
            carry = (l1->val + carry) >= 10?(l1->val + carry)/10: 0;
            l1 = l1->next;
            res = res->next;
        }
        while(l2){
            res->next = new  ListNode((l2->val + carry) %10);
            carry = ( l2->val + carry) >= 10?( l2->val + carry)/10 : 0;
            l2 = l2->next;
            res = res->next;
        }
        if(carry){
            res->next = new ListNode(1);
        }
        return cur->next;
    }
};
// @lc code=end

