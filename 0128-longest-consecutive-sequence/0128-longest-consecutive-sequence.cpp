#include <vector>
#include <unordered_set>
#include <algorithm>

class Solution {
public:
    int longestConsecutive(std::vector<int>& nums) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(NULL);

        if (nums.empty()) {
            return 0;
        }
        std::unordered_set<int> numSet(nums.begin(), nums.end());
        int longestStreak = 0;

        for (const int& num : numSet) {
            if (numSet.find(num - 1) == numSet.end()) {
                int currentNum = num;
                int currentStreak = 1;

                while (numSet.find(currentNum + 1) != numSet.end()) {
                    currentNum += 1;
                    currentStreak += 1;
                }
                longestStreak = std::max(longestStreak, currentStreak);
            }
        }

        return longestStreak;
    }
};


/* class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        vector<int> length;
        int count=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]<nums[i]){
                count++;
            }
            else{
                count=0;
            }
        }
        return max_element(length);
    }
}; */