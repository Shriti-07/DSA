class Solution {
public:
    int minInsertions(string s) {
        int total=0,close=0;
        for(char c : s){
            if(c=='('){
                if(close%2!=0){
                    total++;
                    close--;
                }
                close=close+2;
            }
            else{
                close--;
                if(close<0){
                    total++;
                    close=1;
                }
            }
        }
        return total+close;
    }
};