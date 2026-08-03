#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> recursiveInsertionSort(vector<int>& nums) {
        // TODO: write your solution here

    }
};

int main() {
    vector<int> nums = {5, 1, 4, 2, 8};
    Solution sol;
    vector<int> result = sol.recursiveInsertionSort(nums);
    for (int x : result) cout << x << " ";
    cout << endl;
    return 0;
}
