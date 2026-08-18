class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>result(n,0);
        int pos=0;
        int neg=1;
        for(int i=0;i<n;i++){
            if(nums[i]>=0){
                result[pos]=nums[i];
                pos=pos+2;
            }
            else{
                result[neg]=nums[i];
                neg=neg+2;
            }
        }
        return result;
    }
};

/* class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>pos;
        vector<int>neg;
        for(int i=0;i<n;i++){
            if(nums[i]>=0){
                pos.emplace_back(nums[i]);
            }
            else{
                neg.emplace_back(nums[i]);
            }
        }
        for (int i = 0; i < n / 2; i++) {
            nums[2 * i] = pos[i];     
            nums[2 * i + 1] = neg[i]; 
        }
        return nums;
    }
};  */

// NOT RIGHT!!!!!! 
/* class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(i%2==0){
                if(nums[i]>0){
                    continue;
                }
                else{
                    for(int j=i+1;j<n;j++){
                        if(nums[j]>0){
                            swap(nums[i],nums[j]);
                            break;
                        }
                    }
                }
            }
            else{
                if(nums[i]<0){
                    continue;
                }
                else{
                    for(int j=i+1;j<n;j++){
                        if(nums[j]<0){
                            swap(nums[i],nums[j]);
                            break;
                        }
                    }
                }
            }
        }
        return nums;
    }
}; */