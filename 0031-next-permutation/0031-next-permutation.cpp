class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int pivot = -1;
        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                pivot = i;
                break;
            }
        }
        if (pivot == -1) {
            reverse(nums.begin(), nums.end());
            sort(nums.begin()+1, nums.end());
            return;
        }
        int candidate = pivot + 1;
        for (int j = pivot + 1; j < n; j++) {
            if (nums[j] > nums[pivot] && nums[j] < nums[candidate]) {
                candidate = j;
            }
        }
        swap(nums[pivot], nums[candidate]);
        sort(nums.begin() + pivot + 1, nums.end());
    }
};