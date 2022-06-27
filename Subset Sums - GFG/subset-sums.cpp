// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int>v;
        int sum = 0;
        int i=0;
        F(i, v,arr,sum,N);
        return v; 
        
    }
    void F(int i, vector<int>&v,vector<int>&arr ,int sum,int N){
        if(i>=N){
            v.push_back(sum);
            return ;
        }
        
        F(i+1 , v , arr ,sum+arr[i], N);
        
        F(i+1 , v , arr , sum, N);
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends