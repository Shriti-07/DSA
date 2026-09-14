class Solution {
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
};