class Solution {
public:
    void F(int ind ,vector<vector<int>>& ans, vector<int>& ds,vector<int>& a,int target){
        
            if(target==0){
                ans.push_back(ds);
            return;
            }
    for(int i=ind;i<a.size();i++){
        if (i>ind&&a[i]==a[i-1])continue;
        if (a[i]>target)break;
            ds.push_back(a[i]);
                F(i+1,ans, ds,a,target-a[i]);
            ds.pop_back();   
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>>ans;
        vector<int>ds;
        F(0,ans, ds,candidates,target);
        return ans;
    }
};