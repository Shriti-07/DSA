class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int up=*max_element(piles.begin(),piles.end());
        while(low<up){
            int mid=low+(up-low)/2;
            long long total=0;
            for(int pile : piles){
                total+=(pile+mid-1LL)/mid;
            }
            if(total<=h){
                up=mid;
            }
            else{
                low=mid+1;
            }
        }
        return up;
    }
};