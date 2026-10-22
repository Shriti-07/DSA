
class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == -2147483648 && divisor == -1)
            return 2147483647;

        long long a = dividend;
        long long b = divisor;

        bool negative = (a < 0) != (b < 0);

        if (a < 0) a = -a;
        if (b < 0) b = -b;

        long long quotient = 0;

        while (a >= b) {
            long long temp = b;
            long long count = 1;

            while (a >= (temp << 1)) {
                temp <<= 1;
                count <<= 1;
            }

            a -= temp;
            quotient += count;
        }

        if (negative)
            quotient = -quotient;

        return (int)quotient;
    }
};

/* class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend==INT_MIN && divisor==-1) return INT_MAX;
        if(dividend==INT_MIN && divisor==1) return INT_MIN;

        int flag=1;
        
        long long absDividend = dividend;
        long long absDivisor = divisor;

        if(absDivisor<0 && absDividend<0){
            absDividend=-absDividend;
            absDivisor=-absDivisor;
        }
        else{
            if(absDividend < 0){
            flag=-1;
            absDividend=-absDividend;
            }
            if(absDivisor < 0){
            absDivisor=-absDivisor;
            flag=-1;
            }
        }
        long long quotient = 0;
        for(int i=31;i>=0;i--){
            if((absDividend>>i)>=absDivisor){
                quotient += (1LL << i);
                absDividend -= (absDivisor << i);
            }
        }
        return (flag==1) ? quotient : -quotient;
    }
}; */