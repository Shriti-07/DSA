class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> count;
        for(auto i :nums){
            count[i]++;
        }
        for(auto& it:count){
            if(it.second>n/2){
                return it.first;
            }
        }
        return -1;
    }
};

/* class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count =0;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(nums[j]==nums[i]){
                    count++;
                }
            }
            if(count>=(nums.size()/2)){
                return nums[i];
            }
            count=0;
        }
        return -1;
    }
};  */