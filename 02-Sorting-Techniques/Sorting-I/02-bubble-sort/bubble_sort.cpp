#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> bubbleSort(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (nums[j] > nums[j + 1]) {
                    swap(nums[j], nums[j + 1]);
                }
            }
        }
        return nums;
    }
};

int main() {
    vector<int> nums = {5, 1, 4, 2, 8};
    Solution sol;
    vector<int> result = sol.bubbleSort(nums);
    for (int x : result) cout << x << " ";
    cout << endl;
    return 0;
}
