class Solution {
public:
    string removeOuterParentheses(string s) {
        int count=0;
        string ans="";
        for(char c : s){
            if(c=='(' && count==0){
                count++;
                continue;
            }
            else if(c=='('){
                ans=ans+"(";
                count++;
            }
            if(c==')' && count==1){
                count--;
                continue;
            }
            else if(c==')'){
                ans=ans+")";
                count--;
            }
        }
        return ans;
    }
};