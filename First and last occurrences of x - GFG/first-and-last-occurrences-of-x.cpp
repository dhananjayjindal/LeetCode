// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
vector<int> find(int arr[], int n , int x )
{
    int a=0,i=0;
    vector<int>ans;
    for (int i=0;i<n;i++)
    {
        if (arr[i]==x){
            a=i;
            break;}
            else 
            a=-1;
            
    }
    if (a==-1){
        ans.push_back(a);
        ans.push_back(a);
        return ans ;
    }
    
   for (int i=0;i<n;i++)
    {
        if (arr[i]==x){
            a=i;
            break;}
    }
   
   ans.push_back(a);
    for (int j=n-1;j>i;j--)
    {
        if (arr[j]==x){
            a=j;
            break;
        }
    }ans.push_back(a);
    return ans;
}

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}


  // } Driver Code Ends