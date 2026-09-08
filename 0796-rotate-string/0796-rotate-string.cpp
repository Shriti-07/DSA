class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length()!=goal.length()) return false;
        s=s+s;
        if(s.contains(goal)){
            return true;
        }
        return false;
    }
};

/* class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length()!=goal.length()) return false;
        int i=0;
        string character="";
        while(i<s.length()){
            if(s==goal){
                return true;
            }
            s=s+s[0];
            s.erase(0,1);
            i++;
        }
        return false;
    }
}; */