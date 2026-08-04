#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> insertionSort(vector<int>& nums) {
        int n=nums.size();
        for(int i=1;i<n;i++){
            for(int j=i;j>0 && nums[j-1]>nums[j];j--){
                swap(nums[j-1],nums[j]);
            }
        }
    return nums;
    }
};

int main() {
    vector<int> nums = {5, 1, 4, 2, 8};
    Solution sol;
    vector<int> result = sol.insertionSort(nums);
    for (int x : result) cout << x << " ";
    cout << endl;
    return 0;
}
