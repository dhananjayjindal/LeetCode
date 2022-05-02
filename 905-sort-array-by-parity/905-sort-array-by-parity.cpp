class Solution {
public:
    vector<int> sortArrayByParity(vector<int> &nums)
    {
        vector<int> muns;
        int x = nums.size();
        int j = 0;
        int y=x;
        muns.resize(x);
        for (int i = 0; i < x; i++)
        {
            if (nums[i] % 2 == 0)
            {
                muns[j++] = nums[i];
            }
            else
            {
                muns[--y] = nums[i];
            }
        }
        return muns;
    }
};