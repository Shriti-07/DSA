class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length() != t.length()) return false;
        int map_s[256]={0};
        int map_t[256]={0};

        for(int i=0;i<s.length();i++){
            unsigned char char_s=s[i];
            unsigned char char_t=t[i];

            if(map_s[char_s] != map_t[char_t]){
                return false;
            }

            map_s[char_s]=i+1;
            map_t[char_t]=i+1;
        }
        return true;
    }
};

//Not optimal
/* class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length() != t.length()) return false;
        int n=s.length();
        unordered_map<char , char> mp1;
        unordered_map<char , char> mp2;

        for(int i=0;i<n;i++){
            auto it=mp1.find(s[i]);
            if (it != mp1.end() && it->second != t[i]){
                return false;
            }
            mp1[s[i]]= t[i];

            auto itt=mp2.find(t[i]);
            if (itt != mp2.end() && itt->second != s[i]){
                return false;
            }
            mp2[t[i]]= s[i];
        }
        return true;
    }
}; */