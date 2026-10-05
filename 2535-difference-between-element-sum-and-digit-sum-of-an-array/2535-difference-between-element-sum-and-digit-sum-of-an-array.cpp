class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int eleSum=0;
        int digiSum=0;
        for(int i : nums){
            eleSum+=i;
            int temp=i;
            while(temp>0){
                digiSum+=temp%10;
                temp=temp/10;
            }
        }
        return abs(eleSum-digiSum);
    }
};