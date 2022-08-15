class Solution {
public:
    int trap(vector<int>& arr) {
        int n = arr.size();
        int left[n];
        int right[n];
        int ans=0;
    
        
        left[0] = arr[0];
    for (int i = 1; i < n; i++)
        left[i] = max(left[i - 1], arr[i]);
 
        right[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
        right[i] = max(right[i + 1], arr[i]);
        
        for (int i = 1; i < n - 1; i++) {
        int var = min(left[i - 1], right[i + 1]);
        if (var > arr[i]) 
        {
            ans += var - arr[i];
        }
    }
 
    return ans;
        
    }
};