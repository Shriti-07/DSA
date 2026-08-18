class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int minEle=INT_MAX;
        int profit;
        for(int i=0;i<n;i++){
            if(minEle>prices[i]){
                minEle=prices[i];
            }
            profit=max(profit,prices[i]-minEle);
        }
        if(profit>=0){
            return profit; 
        }
        else{
            return 0;
        }
    }
};

/* class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int profit=0;
        for(int i=0;i<n;i++){
            int minEle=prices[i];
            for(int j=i+1;j<n;j++){
                profit=max(prices[j]-minEle,profit);
            }
        }
        if(profit>=0){
            return profit; 
        }
        else{
            return 0;
        }
    }
}; */