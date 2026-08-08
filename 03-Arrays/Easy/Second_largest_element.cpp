/* class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        int max=INT_MIN;
        int previous=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>max){
                previous=max;
                max=nums[i];
            }
            else if(nums[i]>previous && nums[i]<max){
                previous=nums[i];
            }
        }
        return previous==INT_MIN?-1:previous;
    }
}; */
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        int min=nums[0];
        for(int i=0;i<nums.size();i++){
            if(nums[i]<min){
                min=nums[i];
            }
        }
        int max=min;
        int previous=min;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>max){
                previous=max;
                max=nums[i];
            }
             else if (nums[i] > previous && nums[i] < max) {
                previous = nums[i];
            }
        }
        if(max==min){
            return -1;
        }
        return previous;
    }
};

int main() {
    vector<int> arr={1,2,2,8,5,21,67,9,33};
    Solution sol;
    int max=sol.secondLargestElement(arr);
    cout<<max;
    return 0;
}