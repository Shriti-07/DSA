class Solution {
public:
    int climbStairs(int n) {
        if(n<=3) return n;
        int step1=2;
        int step2=3;
        for(int i=4;i<=n;i++){
            int curr=step1+step2;
            step1=step2;
            step2=curr;
        }
        return step2;
    }
};