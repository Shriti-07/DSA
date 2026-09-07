class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans=strs[0];
        for(int i=1;i<strs.size();i++){
            int j=0;
            while(j<ans.length() && j<strs[i].length()){
                if(ans[j]!=strs[i][j]){
                    break;
                }
                j++;
            }
            ans.erase(j);
            if(ans==""){
                return "";
            }
        }
        return ans;
    }
};