class Solution {
private:
    void ans(string current,int opens,int closes,int n,vector<string>& result){
        if(opens==n && closes==n){
            result.push_back(current);
            return;
        }
        if(opens<n){
            ans(current+"(",opens+1,closes,n,result);
        }
        if(closes<opens){
            ans(current+")",opens,closes+1,n,result);
        }
    }
public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        ans("",0,0,n,result);
        return result;
    }
};