class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int i;
        int a=0;
        int b =0; 
        int c =0;
        for (i=0;i<n;i++){
            if (nums[i] == 0)
                a++;
            else if (nums[i] == 1)
                b++;
            else if(nums[i] == 2)
                c++;
        }
        for (i=0;i<n;i++){
            nums.pop_back();
        }
        while(a>0){
            nums.push_back(0);
                a--;
        }
        while(b>0){
            nums.push_back(1);
                b--;
        }
        while(c>0){
            nums.push_back(2);
                c--;
        }
            
    }
};