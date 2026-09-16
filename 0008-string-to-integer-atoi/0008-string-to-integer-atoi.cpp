class Solution {
public:
    int myAtoi(string s) {
        if (s.length() == 0) return 0;   
        int ans=0;
        int cap=1;
        int i=0;
        while (i<s.length() && s[i]==' ') {
            i++;
        }
        if (i<s.length() && s[i]=='-') {
            cap=-1;
            i++;
        } else if(i<s.length() && s[i]=='+') {
            i++;
        }
        while (i<s.length() && isdigit(s[i])) {
            int digit = s[i] - '0';
            if (ans > INT_MAX/10 || (ans==INT_MAX / 10 && digit>7)) {
                return (cap == 1) ? INT_MAX : INT_MIN;
            }
            ans=ans*10+digit;
            i++;
        }
        return ans*cap;
    }
};
