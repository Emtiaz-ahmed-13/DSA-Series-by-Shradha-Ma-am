class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int bestBuy = prices[0];
        
        for(int i = 0; i < prices.size(); i++) {
            // Update maxProfit if selling today is profitable
            if(prices[i] > bestBuy) {
                maxProfit = max(maxProfit, prices[i] - bestBuy);
            }
            // Update bestBuy to the minimum price seen so far
            bestBuy = min(bestBuy, prices[i]);
        }
        
        return maxProfit; // Return the maximum profit found
    }
};