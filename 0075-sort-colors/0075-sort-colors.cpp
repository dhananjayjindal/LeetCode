class Solution {
public:
    void sortColors(vector<int> &nums) {
        int low=0;
        int p=0;
        int high=nums.size()-1;
        while(p<=high){
            // cout<<"dsf";
        if(nums[p]==2){
        nums[p]=nums[high];
        nums[high]=2 ;
        high--;
        // p++;
        }
        else if(nums[p]==0){
        nums[p]=nums[low];
        nums[low]=0;              
        p++;
        low++;
         }
        else
            p++;
        } 
        
    }
};