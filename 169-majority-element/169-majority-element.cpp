class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int element = 0, count = 0;
        for (int n : nums)
        {
            if (count == 0)
                element = n;
            n == element ? ++count : --count;
        }
        return element;
    }
};