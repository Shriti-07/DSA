class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        int totalSub=1<<n;
        vector<vector<int>> result;
        result.reserve(totalSub);

        for(int i=0;i<totalSub;i++){
            vector<int> currentSub;
            for(int j=0;j<n;++j){
                if((i & (1<<j))!=0){
                    currentSub.push_back(nums[j]);
                }
            }
            result.push_back(currentSub);
        }
        return result;
    }
};