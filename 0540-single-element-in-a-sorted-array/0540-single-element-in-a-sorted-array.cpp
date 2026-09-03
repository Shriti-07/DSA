class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        if(nums.size()==1) return nums[0]; 
        int lower=0;
        int upper=nums.size()-1;
        while(lower<upper){
            int mid=lower+(upper-lower)/2;
            if(mid%2==1){
                mid--;
            }
            if(nums[mid]==nums[mid+1]){
                lower=mid+2;
            }
            else{
                upper=mid;
            }
        }
        return nums[lower];
    }
};