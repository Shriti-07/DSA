class Solution {
public:
    int countCommas(int n) {
        if(n<1000) return 0;
        long long lower=1000;
        long long upper=9999;
        long long total=0;
        long long commasPerNum=1;
        while(lower<=n){
            long long count = min(upper, (long long)n) - lower + 1;
            total += count*commasPerNum;
            lower*=10;
            upper=((upper+1)*10)-1;
        }
        return total;
    }
};

/* class Solution {
public:
    int countCommas(int n) {
        n = abs(n); 
        int count = 0;
        int commas=0;
        for(int i=1;i<=n;i++){
            int temp=i;
            int count=0;
            while(temp>0){
                count++;
                temp/=10;
            }
            if(count>=4){
                commas=commas+(count-1)/3;
            }
        }
    return commas; 
    }
}; */