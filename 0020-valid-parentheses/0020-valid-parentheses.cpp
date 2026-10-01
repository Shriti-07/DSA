class Solution {
public:
    bool isValid(string s) {
        stack<char> stak;
        for(char c : s){
            if(c=='(' || c=='[' || c=='{'){
                stak.push(c);
            }
            else {
                if (stak.empty()) return false;
                
                char top = stak.top();
                if ((c==')' && top=='(') ||
                    (c=='}' && top=='{') ||
                    (c==']' && top=='[')) {
                    stak.pop();
                } 
                else {
                    return false;
                }
            }
        }
     return stak.empty();
    }
};