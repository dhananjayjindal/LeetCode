// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        
        int no=0;
        int i;
        vector<pair<int,int>> arr;
        for(int i=0;i<n;i++){
            arr.push_back({end[i],start[i]});
        }
        sort(arr.begin(),arr.end());
        int limit =-1;
        for(i=0;i<n;i++){
            
            if(arr[i].second>limit){
            limit=arr[i].first;
            no++;
                
            }
        }
        return no;
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}  // } Driver Code Ends