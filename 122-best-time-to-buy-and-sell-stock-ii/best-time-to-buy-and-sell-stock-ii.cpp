class Solution {
public:
    int maxProfit(vector<int>& p) {
        int ans = 0;
        int bestbuy = p[0];
        int maxprofit = INT_MIN;
        for(int i = 0;i<p.size();i++){
            if(p[i] > bestbuy){
                if(i+1 < p.size() && p[i+1] > p[i]){
                    continue;
                }else{
                    maxprofit=  p[i]-bestbuy;
                    ans += maxprofit;
                    if (i + 1 < p.size()) {
                        bestbuy = p[i + 1];
                    }
                }
            }else{
                bestbuy = min( p[i], bestbuy);
            }
        }
        return ans;
    }
};