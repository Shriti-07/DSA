class Solution {
public:
    int mySqrt(int x) {
        if(x==0 || x==1){
            return x;
        }
        int lower=0;
        int upper=x/2;
        int ans=0;
        while(lower<=upper){
            long long mid=lower+(upper-lower)/2;
            if(mid*mid==x){
                return mid;
            }
            else if(mid*mid>x){
                upper=mid-1;
            }
            else{
                ans=mid;
                lower=mid+1;
            }
        }
        return ans;
    }
};
//time complexity:O(√x)
/* class Solution {
public:
    int mySqrt(int x) {
        for(long long i=1;;i++){
            if(i*i==x){
                return i;
            }
            else if(i*i>x){
                return i-1;
            }
        }
    }
}; */