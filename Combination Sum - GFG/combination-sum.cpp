// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution {
  public:
    //Function to return a list of indexes denoting the required 
    //combinations whose sum is equal to given number.
    
    void F(int i,vector<vector<int> >&ans,vector<int> &ds ,vector<int> &a,int target){
        if (i>=a.size()){
            if (target==0){
            
            ans.push_back(ds); 
            }
        return;
    }
    
    if (target>0){
        ds.push_back(a[i]);
        F(i,ans,ds,a,target-a[i]);
        ds.pop_back();
    }
        F(i+1,ans,ds,a,target);
    }
    
    vector<vector<int> > combinationSum(vector<int> &A, int B) {
        // Your code here
    vector<vector<int> >ans;
    vector<int> ds;
    sort(A.begin(),A.end());
    vector<int> temp;
    int x=0,y=A.size(),i=1;
    while(i<y){
    if(A[x]==A[i]){
        i++;
        continue;
    }
        A[++x]=A[i];
    }
    for(i=0;i<=x;i++){
        temp.push_back(A[i]);
    }
    F(0,ans,ds,temp,B);
    
    return ans;
    }
};

// { Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            A.push_back(x);
        }   
        int sum;
        cin>>sum;
        Solution ob;
        vector<vector<int>> result = ob.combinationSum(A, sum);
   		if(result.size()==0){
   			cout<<"Empty";
   		}
        for(int i=0;i<result.size();i++){
            cout<<'(';
            for(int j=0;j<result[i].size();j++){
                cout<<result[i][j];
                if(j<result[i].size()-1)
                    cout<<" ";
            }
            cout<<")";
        }
        cout<<"\n";
    }
}	  // } Driver Code Ends