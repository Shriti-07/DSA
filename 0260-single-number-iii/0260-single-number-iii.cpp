class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long long xorAns=0;
        for(int n : nums){
            xorAns^=n;
        }
        long long rightSetBit= xorAns & (-xorAns);
        int n1=0,n2=0;
        for(int num : nums){
            if((num & rightSetBit)==0){
                n1^=num;
            }
            else n2^=num;

        }
        return {n1,n2};
    }
};