//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
    private:
    
    int f(int ind , int mw , int val[], int wt[] , vector<vector<int>>&dp){
        if (ind ==0) return (mw/wt[0])*val[0];
        if (dp[ind][mw]!=-1) return dp[ind][mw];
        int not_take = 0 + f(ind-1, mw , val , wt , dp);
        int take = INT_MIN;
        if (wt[ind]<=mw)
        take = val[ind] + f(ind, mw - wt[ind] , val , wt , dp );
        return dp[ind][mw] =  max (take,not_take);
    }
    
public:
    int knapSack(int N, int W, int val[], int wt[])
    {
        // code here
        vector<vector<int>>dp(N,vector<int>(W+1,-1));
        return f(N-1,W,val,wt,dp);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, W;
        cin>>N>>W;
        int val[N], wt[N];
        for(int i = 0;i < N;i++)
            cin>>val[i];
        for(int i = 0;i < N;i++)
            cin>>wt[i];
        
        Solution ob;
        cout<<ob.knapSack(N, W, val, wt)<<endl;
    }
    return 0;
}
// } Driver Code Ends