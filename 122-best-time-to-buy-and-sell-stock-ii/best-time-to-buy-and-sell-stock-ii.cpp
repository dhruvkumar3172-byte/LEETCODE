class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maxprofit = 0;
        int profit;
        for(int i = 0; i < n-1; i++){
            if(prices[i+1] > prices[i]){
              profit = prices[i+1] - prices[i];
                maxprofit = maxprofit + profit;

            }
          

        }
        return maxprofit;
        
    }
};