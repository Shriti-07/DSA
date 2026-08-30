class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result={-1,-1};
        if(nums.size()==0) return result;
        int right=nums.size()-1;
        int left=0;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(nums[mid]==target){
                result[0]=mid;
                right=mid-1;
            }
            else if(nums[mid]>target){
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }
        left=0;
        right=nums.size()-1;
         while(left<=right){
            int mid=left+(right-left)/2;
            if(nums[mid]==target){
                result[1]=mid;
                left=mid+1;
            }
            else if(nums[mid]>target){
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }
        return result;
    }
};

/* class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result={-1,-1};
        if(nums.size()==0) return result;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                if(result[0]==-1){
                    result[0]=i;
                }
                result[1]=i;
            }
        }
        return result;
    }
}; */