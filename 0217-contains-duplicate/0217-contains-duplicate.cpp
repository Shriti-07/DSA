class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> check;
        for(int i : nums){
            if(check.count(i)){
                return true;
            }
            check.insert(i);
        }
        return false;
    }
};