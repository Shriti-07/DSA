#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void recursiveInsertionSort(vector<int>& nums,int n) {
        if(n<=1){
            return;
        }
        recursiveInsertionSort(nums,n-1);
        int end=nums[n-1];
        int j=n-2;
        while(j>=0 && nums[j]>end){
            nums[j+1]=nums[j];
            j--;
        }
        nums[j+1]=end;
    }
};

int main() {
    vector<int> nums = {5, 1, 4, 2, 8};
    int n=nums.size();
    Solution sol;
    sol.recursiveInsertionSort(nums,n);
    for (int x : nums) cout << x << " ";
    cout << endl;
    return 0;
}
