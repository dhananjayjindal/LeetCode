class Solution {
public:
    int climbStairs(int n) {
        if(n== 0 or n == 1)
            return 1;
        
//         int x = climbStairs(n-1);
//         int y = climbStairs(n-2);
//         return x + y;
        int x=1;
        int y=1;
        int z=0;
        if (n>1){
            for (int i=1;i<n;i++)
            {
                z=x+y;
                x=y;
                y=z;
            }
        }
        return z;
    }
};