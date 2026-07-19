class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = INT_MIN;
        int low = prices[0];
        for(int i =1;i<prices.size();i++){
            profit = max(profit ,prices[i]-low);
            if(prices[i] < low){
                low = prices[i];
            }
        }
        if(profit < 0){
            return 0;
        }
        return profit;
    }
};