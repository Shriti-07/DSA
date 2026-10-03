class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> stak;
        stak.push(-1);
        int maxLen=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                stak.push(i);
            }
            else{
                stak.pop();
                if(stak.empty()){
                    stak.push(i);
                }
                else{
                    maxLen=max(maxLen,i-stak.top());
                }
            }
        }
        return maxLen;
    }
};