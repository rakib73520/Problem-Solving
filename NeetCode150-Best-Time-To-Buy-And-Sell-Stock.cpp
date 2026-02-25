class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;

        int n = prices.size();

        int l = 0, r = 1;
        while(r < n) {
            if(prices[l] < prices[r]) {
                maxProfit = max(maxProfit, (prices[r] - prices[l]));
            }else{
                l = r;
            }
            r++;
        }

        return maxProfit;
    }
};
