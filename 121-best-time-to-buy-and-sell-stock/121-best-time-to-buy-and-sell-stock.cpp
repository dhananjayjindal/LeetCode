class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0,temp=0,mini=1e9;
        int n= prices.size();
        for (int i=0;i<n;i++){
            mini = min(mini , prices[i]);
            temp = prices[i] - mini;
            profit = max(profit , temp);
        }
        return profit;
    }
};