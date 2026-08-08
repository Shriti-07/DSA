#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int largestElement(vector<int>& nums) {
        int max=nums[0];
        for(int i=0;i<nums.size();i++){
            if(nums[i]>max){
                max=nums[i];
            }
        }
        return max;
    }
};

int main() {
    vector<int> arr={1,2,2,8,5,21,67,9,33};
    Solution sol;
    int max=sol.largestElement(arr);
    cout<<max;
    return 0;
}