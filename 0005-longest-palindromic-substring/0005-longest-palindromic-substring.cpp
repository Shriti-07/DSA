class Solution {
private:
    int expandFromCenter(string&s, int left, int right){
        while(left>=0 && right<s.size() && s[left]==s[right]){
            left--;
            right++;
        }
        return right-left-1;
    }
public:
    string longestPalindrome(string s) {
        if(s.empty()) return "";
        int start=0;
        int maxLen=1;
        for(int i=0;i<s.size();i++){
            int len1= expandFromCenter(s,i,i);
            int len2= expandFromCenter(s,i,i+1);
            int len=max(len1,len2);
            if(len>maxLen){
                maxLen=len;
                start=i-(len-1)/2;
            }
        }
        return s.substr(start,maxLen);
    }
};


//brute force approach
/* class Solution {
private:
    bool Check(string s){
        int l=0, u=s.length()-1;
        while(l<u){
            if(s[l]!=s[u]) return false;
            l++;
            u--;
        }
        return true;
    }
public:
    string longestPalindrome(string s) {
        if(s.length()==1) return s;
        int left=0;
        int right=s.length()-1;
        string ans="";
        for(int i=0;i<s.length();i++){
            for(int j=s.length()-1;j>=i;j--){
                if(s[i]==s[j]){
                    string option=s.substr(i,j-i+1);
                    if(Check(option)){
                        if(ans.length()<option.length()){
                            ans=option;
                        }
                    }
                }
            }
        }
        return ans;
    }
}; */