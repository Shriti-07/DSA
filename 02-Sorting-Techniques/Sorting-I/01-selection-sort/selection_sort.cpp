#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> selectionSort(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n - 1; i++) {
            int min = i;
            for (int j = i + 1; j < n; j++) {
                if (nums[j] < nums[min]) {
                    min = j;
                }
            }
            swap(nums[i], nums[min]);
        }
        return nums;
    }
};

int main() {
    vector<int> nums = {5, 1, 4, 2, 8};
    Solution sol;
    vector<int> result = sol.selectionSort(nums);
    for (int x : result) cout << x << " ";
    cout << endl;
    return 0;
}
