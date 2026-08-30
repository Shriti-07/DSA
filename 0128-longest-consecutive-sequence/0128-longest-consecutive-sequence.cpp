class Solution {
public:
    int longestConsecutive(vector<int>& nums){
        if(nums.size()==0) return 0;
        unordered_set<int> arr(nums.begin(),nums.end());
        int longest=1;
        for(auto i : arr){
            if(arr.count(i-1)){
                continue;
            }
            else{}
                int count=1;
                while(arr.find(i+1)!=arr.end()){
                    count++;
                    i++;
                }
                longest=max(longest,count);
            }
            return longest;
    }
};

/* class Solution {
public:
    int longestConsecutive(vector<int>& nums){
        if(nums.size()==0){
            return 0;
        }
        sort(nums.begin(),nums.end());
        int longest=1;
        int count=0;
        int last=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==last){
                continue;
            }
            else if(nums[i]-1==last){
                count++;
                last=nums[i];
            }
            else{
                count=1;
                last=nums[i];
            }
            longest=max(longest,count);
        }
        return longest;
    }
}; */

/* class Solution {
private:
    bool ls(vector<int>& a, int num) {
        int n = a.size(); 
        for (int i = 0; i < n; i++) {
            if (a[i] == num)
                return true;
        }
        return false;
    }
public:
    int longestConsecutive(vector<int>& nums) {
        int maxlen=0;
        for(int i=0;i<nums.size();i++){
            int curr=nums[i];
            int count=1;
            while(ls(nums,curr+1)==true){
                count=count+1;
                curr=curr+1;
            }
            maxlen=max(maxlen,count);
        }
        return maxlen;
    }
}; */