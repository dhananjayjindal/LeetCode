class Solution {
public:
    void F(int i ,vector<int>& arr,int target,vector<vector<int>>&ans,vector<int>&ds ){
        if (i==arr.size()){
            if(target ==0){
                ans.push_back(ds);}
        return;
        }
        
    if (target>=arr[i])
    {
         ds.push_back(arr[i]);   
         F(i , arr, target-arr[i],ans,ds );
         ds.pop_back();
    }
        F(i+1 , arr, target,ans,ds );
    }
    
   public: 
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>ds;
        F(0,candidates,target,ans,ds);
            return ans;
    }
};