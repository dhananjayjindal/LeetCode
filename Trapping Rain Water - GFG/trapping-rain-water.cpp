// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        
        int left[n+1]={0};
        int right[n+1]={0};
        int maxleft=arr[0];
        int maxright=arr[n-1];
        for(int i=1;i<n-1;i++){
            if(arr[i]>=maxleft){
                maxleft=arr[i];
                left[i]=0;
            }else{
                left[i]=maxleft-arr[i];
            }
        }
        for(int i=n-2;i>0;i--){
            if(arr[i]>=maxright){
                maxright=arr[i];
                right[i]=0;
            }else{
                right[i]=maxright-arr[i];
            }
        }
        long long sum=0;
        for(int i=1;i<n-1;i++){
            if(left[i]<=right[i]){
                sum+=left[i];
            }else{
                sum+=right[i];
            }
        }
        return sum;
    }
};

// { Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}  // } Driver Code Ends