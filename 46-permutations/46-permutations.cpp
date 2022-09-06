class Solution {
public:
    void F(vector<vector<int>>&ans,vector<int>& nums,int index,int n){
        if(index==n){
            ans.push_back(nums);
        return;
        }
    
    for(int i =index;i<n;i++){
        swap(nums[i],nums[index]);
        F(ans,nums,index+1,n);
        swap(nums[i],nums[index]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans; 
        int n =nums.size();
        F(ans,nums,0,n);
        return ans;
    }
};