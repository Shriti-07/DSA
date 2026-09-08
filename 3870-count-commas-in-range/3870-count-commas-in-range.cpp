class Solution {
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
};