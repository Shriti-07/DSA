class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
       int count=0;
       int maxOne=0;
       for(int i=0;i<nums.size();i++){
        if(nums[i]==1){
            count++;
        }
        if(nums[i]!=1){
            maxOne= max(maxOne,count);
            count=0;
        }
       } 
       return max(maxOne,count);
    }
};