class Solution {
public:
    int countDigits(int num) {
        int temp=num;
        int count=0;
        while(temp>0){
            int curr=temp%10;
            if(num%curr==0){
                count++;
            }
            temp=temp/10;
        }
        return count;
    }
};