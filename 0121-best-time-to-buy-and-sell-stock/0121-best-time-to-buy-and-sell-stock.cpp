class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0,x=0,mini=1e9;
        int n=prices.size();
        for (int i=0;i<n;i++){
            mini=min(mini,prices[i]);
            x=prices[i]-mini;
            profit=max(x,profit);
        }
    return profit;
    }
};