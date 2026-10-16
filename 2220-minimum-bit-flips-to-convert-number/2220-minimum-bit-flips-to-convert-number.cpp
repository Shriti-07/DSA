class Solution {
public:
    int minBitFlips(int start, int goal) {
        int count=0;
        int changes=start^goal;
        for(int i=0;i<32;i++){
            if(changes & 1<<i){
                count++;
            }
        }
        return count;
    }
};