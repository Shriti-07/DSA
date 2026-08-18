class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(),nums.end());
        int sum=0;
        int target=0;
        int j,k;
        for(int i=0;i<nums.size()-2;i++){
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            j=i+1;
            k=nums.size()-1;
            target= -(nums[i]);
            while(j<k){
                sum=nums[j]+nums[k];
                if(sum==target){
                    result.push_back({nums[i],nums[j],nums[k]});
                    while (j < k && nums[j] == nums[j + 1]) j++;
                    while (j < k && nums[k] == nums[k - 1]) k--;
                    j++;
                    k--;
                }
                if(sum>target){
                    k--;
                }
                if(sum<target){
                    j++;
                }
            }
        }
        return result;
    }
};