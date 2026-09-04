class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> prefix_counts;
        prefix_counts[0] = 1; // Base case: sum of 0 appears once initially
        
        int current_sum = 0;
        int count = 0;
        
        for (int num : nums) {
            current_sum += num;
            
            // Check if (current_sum - k) has occurred before
            if (prefix_counts.count(current_sum - k)) {
                count += prefix_counts[current_sum - k];
            }
            
            // Increment the frequency of the current prefix sum
            prefix_counts[current_sum]++;
        }
        
        return count;
    }
};
//if array has only positive numbers
//way 1
/* class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int sum;
        int count;
        int max_len=0;
        for(int i=0;i<n;i++){
            sum=nums[i];
            count=1;
            if (sum == k) {
                max_len = max(max_len, count);
            }
            for(int j=i+1;j<n;j++){
                sum=sum+nums[j];
                count++;
                if(sum==k){
                    max_len = max(max_len, count);
                }
            }
        }
        return max_len;
    }
}; 
//way 2
class Solution{
    public:
        int longestSubarray(vector<int> &nums, int k){
            int i=0,j=0;
            int maxNum=0;
            int sum=0;
            while(j<nums.size()){
                sum=sum+nums[j];
                while(sum>k){
                        sum=sum-nums[i];
                        i++;
                    }
                
                if(sum==k)
                    maxNum=max(maxNum,j-i+1);
                j++;
            }
            return maxNum;
        }
    };*/
