class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
     
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        int i,n=nums.size();
        
        for(i=0;i<n-2;i++){
            
            if(i==0 || (i>0 && nums[i]!= nums[i-1])){
                int hi=n-1,lo=i+1,sum=0-nums[i];
                
                while(hi>lo){
                    
                    if(sum==nums[hi]+nums[lo]){
                        
                        vector<int>temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[lo]);
                        temp.push_back(nums[hi]);
                        ans.push_back(temp);
                        
                        while(lo<hi&&nums[lo]==nums[lo+1])lo++;
                        while(lo<hi&&nums[hi]==nums[hi-1])hi--;
                        
                        lo++;
                        hi--;
                    }
                    else if(nums[lo]+nums[hi]<sum)lo++;
                    else hi--;
                    
                }
            }
        }
        return ans;
    }
};