class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int, int> lossCount;
        
        for (const auto& match : matches) {
            int winner = match[0];
            int loser = match[1];
            
            if (lossCount.find(winner) == lossCount.end()) {
                lossCount[winner] = 0;
            }
            
            lossCount[loser]++;
        }
        
        vector<int> zeroLoss;
        vector<int> oneLoss;
        
        for (const auto& [player, losses] : lossCount) {
            if (losses == 0) {
                zeroLoss.push_back(player);
            } else if (losses == 1) {
                oneLoss.push_back(player);
            }
        }
        
        sort(zeroLoss.begin(), zeroLoss.end());
        sort(oneLoss.begin(), oneLoss.end());
        
        return {zeroLoss, oneLoss};
    }
};