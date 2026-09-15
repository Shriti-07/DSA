class Solution {
private:
    int conversion(char c){
        if(c=='I') return 1;
        if(c=='V') return 5;
        if(c=='X') return 10;
        if(c=='L') return 50;
        if(c=='C') return 100;
        if(c=='D') return 500;
        if(c=='M') return 1000;
        return 0;
    }
public:
    int romanToInt(string s) {
        int num=0;
        int ans=0;
        for(int i=0;i<s.length();i++){
            if (i+1<s.length() && conversion(s[i]) < conversion(s[i + 1])) {
                ans -= conversion(s[i]);
            } else {
                ans += conversion(s[i]);
            }
        }
        return ans;
    }
};