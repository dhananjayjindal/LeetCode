class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    int a=0,b=1;
        int size=nums.size();
        if(size==0){
            return 0;
        }
        if(size==1){
            return 1;
        }
        for(int i=0;i<size-1;i++){
            if(nums[a]==nums[b]){
                b++;
            }
            else{
                nums[++a]=nums[b];
                b++;
            }
        }
    return a+1;
    }
};