class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int curr=nums[0];
        int k=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=curr){
                nums[k]=nums[i];
                curr=nums[i];
                k++;
            }
        }
        return k;
    }
};