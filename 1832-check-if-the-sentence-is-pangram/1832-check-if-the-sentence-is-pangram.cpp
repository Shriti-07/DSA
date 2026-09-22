class Solution {
public:
    bool checkIfPangram(string sentence) {
        int freq[26]={0};
        for(char c : sentence){
            freq[c-'a']++;
        }
        if(find(begin(freq),end(freq),0)!=end(freq)) return false;
        return true;
    }
};