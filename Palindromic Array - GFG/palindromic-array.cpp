// { Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;


 // } Driver Code Ends
/*Complete the function below*/

class Solution {
public:
    int PalinArray(int a[], int n)
    {int c=0;
    	for (int i=0;i<n;i++){
    	    if (check(a[i]))
    	    c++;
    	}
    	if(c==n)
    	return 1;
    	else return 0;
    }
    
    bool check(int a){
        if(a==reverse(a))
        return true;
        else 
        return false;
    }
    
    int reverse(int n){
        int rev = 0;
        while (n > 0){
            int last = n%10;
            rev = rev*10+last;
            n = n/10;
        }
        return rev;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}  // } Driver Code Ends