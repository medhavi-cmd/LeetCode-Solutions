class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int max_profit = 0;
        int min_day = prices[0];
        for (int i = 0; i<n; i++){
            int profit = prices[i] - min_day;
            max_profit = max(profit, max_profit);
            min_day = min(min_day, prices[i]);
        }
        return max_profit;
    }
};