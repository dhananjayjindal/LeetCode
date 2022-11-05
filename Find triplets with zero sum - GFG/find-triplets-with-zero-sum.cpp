//{ Driver Code Starts
#include<bits/stdc++.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

// } Driver Code Ends
/* You are required to complete the function below
*  arr[]: input array
*  n: size of array
*/
class Solution{
  public:
    //Function to find triplets with zero sum.
    bool findTriplets(int nums[], int n)
    { 
        vector<vector<int>>ans;
        sort(nums,nums+n);
        int i;
        
        for(i=0;i<n-2;i++){
            
            if(i==0 || (i>0 && nums[i]!= nums[i-1])){
                int hi=n-1,lo=i+1,sum=0-nums[i];
                
                while(hi>lo){
                    
                    if(sum==nums[hi]+nums[lo]){
                        
                        return 1;
                    }
                    else if(nums[lo]+nums[hi]<sum)lo++;
                    else hi--;
                    
                }
            }
        }
        return 0;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
	cin>>t;
	while(t--){
    	int n;
    	cin>>n;
    	int arr[n]={0};
    	for(int i=0;i<n;i++)
    		cin>>arr[i];
    	Solution obj;
        if(obj.findTriplets(arr, n))
            cout<<"1"<<endl;
        else 
            cout<<"0"<<endl;
	}
    return 0;
}
// } Driver Code Ends