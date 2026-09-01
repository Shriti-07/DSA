class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int lower=0;
        int upper=nums.size()-1;
        while(lower<=upper){
            int mid=lower+(upper-lower)/2;
            if(nums[mid]==target){
                return true;
            }
            if(nums[lower]==nums[mid] && nums[mid]==nums[upper]){
                lower++;
                upper--;
            }
            else if(nums[lower]<=nums[mid]) {
                if(nums[lower]<=target && target<nums[mid]){
                    upper=mid-1;
                }
                else{
                    lower=mid+1;
                }
            }
            else{
                if(nums[mid]<target && target<=nums[upper]){
                    lower=mid+1;
                }
                else{
                    upper=mid-1;
                }
            }
        }
        return false;
    }
};

//Brute Force
/* class Solution {
public:
    bool search(vector<int>& nums, int target) {
        bool found=false;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                found= true;
                break;
            }
        }
        return found;
    }
}; */