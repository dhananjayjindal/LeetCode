class Solution
{
public:
    int titleToNumber(string columnTitle)
    {
        int res = 0, index = columnTitle.size() - 1;
        for (char let: columnTitle) {
            res += (let - 'A' + 1) * pow(26, index--);
            
        }
        return res;
    }
};