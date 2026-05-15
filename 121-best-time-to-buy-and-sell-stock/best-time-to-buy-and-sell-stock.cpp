class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int ans = 0;
        int minm = INT_MAX;
        
        for(int i = 0; i < n; i++){
            minm = min(minm , prices[i]);
            int profit = prices[i] - minm;
            ans = max(profit , ans);

        }
        return ans;
         
    }
};