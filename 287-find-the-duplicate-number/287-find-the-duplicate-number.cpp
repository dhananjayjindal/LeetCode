class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        int n=nums.size();
        sort (nums.begin(),nums.end());
        for (int i=0;i<n;i++){
            if (nums[i]==nums[i+1]){
            return nums[i];}
            else if (nums[n-i-1]==nums[n-2-i]){
                return nums[n-i-1];
            }}
        return 0;
    }
};