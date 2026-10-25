class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five=0;
        int ten=0;
        for(int cash : bills){
            if(cash==5) five++;
            else if(cash==10){
                if(five>0){
                    five--;
                    ten++;
                }
                else{
                    return false;
                }
            }
            else{
                if(ten>0 && five>0){
                    ten--;
                    five--;
                }
                else if(five>=3){
                    five-=3;
                }
                else return false;
            }
        }
        return true;
    }
};