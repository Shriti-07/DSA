class Solution {
public:
    string frequencySort(string s) {
        int count[256]={0};
        string ans="";
        for(int i=0;i<s.length();i++){
            count[s[i]]+=1;
        }
        while(true){
            auto maxPointer =max_element(count,count+256);
            int maxFreq=*maxPointer;
            if(maxFreq==0) break;

            char ch=char(maxPointer-count);
            ans.append(maxFreq,ch);

            *maxPointer=0;
        }
        return ans;
    }
};