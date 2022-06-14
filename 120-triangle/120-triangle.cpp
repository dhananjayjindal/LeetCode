class Solution {
public:
    int dp[202][202];
    int rec(vector<vector<int>>& v, int row,int idx) {
        if(row == v.size()) return 0;
        if(dp[row][idx] != -1)  return dp[row][idx];
        int a = INT_MAX, b = INT_MAX;
        if(idx < row + 1)   a = v[row][idx] + rec(v, row + 1, idx);
        if(idx + 1 < row + 1)   b = v[row][idx + 1] + rec(v, row + 1, idx + 1);
        return dp[row][idx] = min(a, b);
    }

    int minimumTotal(vector<vector<int>>& v) {
        memset(dp, -1, sizeof(dp));
        return rec(v, 0, 0);
    }
};