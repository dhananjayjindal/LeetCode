class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int c=1;
        int n =nums.size();
        sort (nums.begin(),nums.end());
       
        return nums[n-k];
        
    }
};