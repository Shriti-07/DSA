class Solution {
public:
    int search(vector<int>& nums, int target) {
        int lower=0;
        int upper=nums.size()-1;
        int pivot=-1;
        while(lower<=upper){
            int mid=lower+(upper-lower)/2;
            if(mid<nums.size()-1 && nums[mid]>nums[mid+1]){
                pivot=mid;
                break;
            }
            if(nums[mid]>=nums[lower]){
                lower=mid+1;
            }
            else{
                upper=mid-1;
            }
        }
        int start,end;
        if(pivot!=-1){
            if(target>=nums[0] && target<=nums[pivot]){
                start=0;
                end=pivot;
            }
            else{
                start=pivot+1;
                end=nums.size()-1;
            }
        }
        else{
            start=0;
            end=nums.size()-1;
        }

        while(start<=end){
            int mid=start+(end-start)/2;
            if(nums[mid]==target){
                return mid;
            }
            if(nums[mid]>target){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return -1;
    }
};