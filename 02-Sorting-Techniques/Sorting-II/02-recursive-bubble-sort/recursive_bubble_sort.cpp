#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void recursiveBubbleSort(vector<int>& nums,int n) {
        if(n<=1){
            return;
        }
        for(int i=0;i<n-1;i++){
            if(nums[i]>nums[i+1]){
                swap(nums[i],nums[i+1]);
            }
        }
        recursiveBubbleSort(nums,n-1);
    }
};

int main() {
    vector<int> nums = {5, 1, 4, 2, 8};
    int n=nums.size();
    Solution sol;
    sol.recursiveBubbleSort(nums,n);
    for (int x : nums) cout << x << " ";
    cout << endl;
    return 0;
}
