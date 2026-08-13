class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int zeroes=0;
        int ones=0;
        int twos=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0) zeroes++;
            if(nums[i]==1) ones++;
            if(nums[i]==2) twos++;
        }
        int low=0;
        int mid=zeroes;
        int high=zeroes+ones;
        while(low<mid){
            nums[low]=0;
            low++;
        }
        while(mid<high){
            nums[mid]=1;
            mid++;
        }
        while(high<n){
            nums[high]=2;
            high++;
        }
    }
};

/* class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> result;
        for(int i=0;i<3;i++){
            for(int j=0;j<nums.size();j++){
                if(nums[j]==i){
                    result.emplace_back(i);
                }
            }
        }
        for(int i=0;i<nums.size();i++){
            nums[i]=result[i];
        }
    }
}; */