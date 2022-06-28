// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
	    void F(int i,vector<string>&ans,string S)
	    {
	        if (i==S.length()){
	        ans.push_back(S);
	        return;
	        }
	        
	        for (int j=i;j<S.length();j++){
	            swap(S[j],S[i]);
	            F(i+1,ans,S);
	            swap(S[j],S[i]);
	        }
	        
	    }
		vector<string>find_permutation(string S)
		{
		    // Code here there 
		    
        vector<string>ans;
        vector<string> temp;
        F(0,ans,S);
        sort(ans.begin(),ans.end());
        int x=0,y=ans.size(),i=1;
    while(i<y)
    {
    if(ans[x]==ans[i]){
        i++;
        continue;
    }
        ans[++x]=ans[i];
    }
    for( i=0;i<=x;i++){
        temp.push_back(ans[i]);
    }
    sort(temp.begin(),temp.end());
        return temp;
		}
};

    // int x=0,y=A.size(),i=1;
    // while(i<y){
    // if(A[x]==A[i]){
    //     i++;
    //     continue;
    // }
    //     A[++x]=A[i];
    // }
    // for(i=0;i<=x;i++){
    //     temp.push_back(A[i]);
    // }

// { Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}
  // } Driver Code Ends