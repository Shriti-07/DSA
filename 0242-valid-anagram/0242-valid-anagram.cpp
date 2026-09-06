class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }
        int counts[26]={0};
        for(char c : s){
            counts[c-'a']++;
        }
        for(char c : t){
            counts[c-'a']--;
            if(counts[c-'a']<0){
                return false;
            }
        }
        return true;
    }
};

// the problem wit this is that it igones duplicate couunt and just checks presence
/* class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }
        unordered_set<char> check;
        for(auto i : s){
            check.insert(i);
        }
        for(auto i : t){
            if(check.count(i)){
                continue;
            }
            else{
                return false;
            }
        }
        return true;
    }
}; */