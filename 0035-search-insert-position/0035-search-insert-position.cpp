class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int lower=0;
        int upper=nums.size()-1;
        int mid;
        while(lower<=upper){
            int mid=lower+(upper-lower)/2;//thi s is not efficient mid=(lower+upper)/2;
            if(nums[mid]==target){
                return mid;
            }
            if(nums[mid]>target){
                upper=mid-1;
            }
            else{
                lower=mid+1;
            }
        }
        return lower;
    }
};