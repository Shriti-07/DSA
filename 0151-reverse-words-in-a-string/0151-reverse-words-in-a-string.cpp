#include <string>
#include <algorithm>

class Solution {
public:

    string reversal(string& s,int low,int up){
        string word = s.substr(low, up - low + 1);
        int l=0, u=word.length()-1;
        while(l<u){
            swap(word[l++],word[u--]);
        }
        return word;
    }
    string reverseWords(string s) {
        reverse(s.begin(),s.end());
        string ans="";
        int len=s.length();
        int i=0;
        while(i<len){
            while(i<len && s[i]==' '){
                i++;
            }
            if(i>=len) break;
            int low=i;
            while(i<len &&s[i]!=' '){
                i++;
            }
            int up=i-1;
            if (!ans.empty()) 
                ans += " ";
            ans += reversal(s, low, up);
        }
        return ans;
    }
};





















/* #include <string>
#include <algorithm>

class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(), s.end());

        int n = s.length();
        int idx = 0;

        for (int start = 0; start < n; ++start) {
            if (s[start] != ' ') {
                if (idx != 0) {
                    s[idx++] = ' ';
                }

                int end = start;
                while (end < n && s[end] != ' ') {
                    s[idx++] = s[end++];
                }

                reverse(s.begin() + idx - (end - start), s.begin() + idx);

                start = end;
            }
        }

        s.resize(idx);
        return s;
    }
}; */