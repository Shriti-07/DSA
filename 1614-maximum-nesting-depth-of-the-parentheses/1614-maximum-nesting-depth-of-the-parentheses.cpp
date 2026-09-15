class Solution {
public:
    int maxDepth(string s) {
        int count=0;
        int maxCount=0;
        for(char ch : s){
            if(ch=='('){
                count++;
            }
            else if(ch==')'){
                maxCount=max(maxCount,count);
                count--;
            }
            else{
                continue;
            }
        }
        return maxCount;
    }
};