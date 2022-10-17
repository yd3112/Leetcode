/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */

// @lc code=start
class Solution {
public:
    bool isValid(string s) {
        if(s.length() %2 != 0){
            return false;
        }
    
        stack<char> st;
        for(int i =0; i < s.length(); i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                st.push(s[i]);
                continue;
            }
            else if(s[i] == ')' || s[i] == '}' || s[i] == ']'){
                if(st.empty()){
                    return false;
                }
                char x = st.top();
                if((x == '(' && s[i] != ')') ||( x == '{' && s[i] != '}') || (x == '[' && s[i] != ']')){
                    return false;
                }
            }
            st.pop();
        }
        if(st.empty()){
            return true;
        }
        else{
            return false;
        }
    }
};
// @lc code=end

