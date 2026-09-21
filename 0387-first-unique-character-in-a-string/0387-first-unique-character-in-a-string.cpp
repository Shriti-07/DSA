class Solution {
public:
    int firstUniqChar(string s) {
        int freq[26]={0};
        for(char c: s){
            freq[c-'a']++;
        }
        for(int i=0;i<s.length();i++){
            if(freq[s[i]-'a']==1) return i;
        }
        return -1;
    }
};

//correct but TLE
/* class Solution {
public:
    int firstUniqChar(string s) {
        for(int i=0;i<s.length();i++){
            if(count(s.begin(),s.end(),s[i])==1){
                return i;
            }
        }
        return -1;
    }
}; */