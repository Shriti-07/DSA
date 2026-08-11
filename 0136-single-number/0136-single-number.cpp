class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int unique= 0;
        for (int num : nums) {
            unique^= num; // XOR operation
        }
        return unique;
    }
};


/* class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        vector<int> hash(n+1,0);
        for( auto i:nums){
            hash[i]++;
        }
        for(int i=0;i<hash.size();i++){
            if(hash[i]==1){
                return i;
            }
        }
        return 0;
    }
}; */