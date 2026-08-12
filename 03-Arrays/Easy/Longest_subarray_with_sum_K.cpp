#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
        int subarraySum(vector<int>& nums, int k) {
            unordered_map<int,int> prefix;
            int sum=0;
            int maxLen=0;
            for(int i=0;i<nums.size();i++){
                sum+=nums[i];
                if(sum==k){
                    maxLen=max(maxLen,i+1);
                }
                int needed=sum-k;
                if(prefix.find(needed)!=prefix.end()){
                    int len=i-prefix[needed];
                    maxLen=max(maxLen,len);
                }
                if(prefix.find(sum)==prefix.end()){
                    prefix[sum]=i;
                }
            }
            return maxLen;
    }
};

/* if array has only positive numbers */
/* way 1 */
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
int main() {
    vector<int> arr={10, -5, 2, 3, -1, 8};
    int k=5;
    Solution sol;
    int len=sol.subarraySum(arr,k);
    cout<<len;
    return 0;
}