class Solution {
public:
    long long countCommas(long long n) {
        if(n<1000) return 0;
        long long lower=1000;
        long long upper=9999;
        long long total=0;
        long long commasPerNum=1;
        long long a=4;
        while(lower<=n){
            commasPerNum=(a-1)/3;
            long long count = min(upper, (long long)n) - lower + 1;
            total += count*commasPerNum;
            lower*=10;
            upper=((upper+1)*10)-1;
            a++;
        }
        return total;
    }
};