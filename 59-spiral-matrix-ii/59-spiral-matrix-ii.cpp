class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int r=0,c=n-1,num=1,i;
        vector<vector<int>> ans(n, vector<int>(n, 0));
        while (num<n*n){
            for(i=r;i<c;i++){
                ans[r][i]=num;
            num++;}
             for(i=r;i<c;i++){
                ans[i][c]=num;
            num++;}
             for(i=c;i>r;i--){
                ans[c][i]=num;
            num++;}
             for(i=c;i>r;i--){
                ans[i][r]=num;
            num++;}
            r++;
            c--;
            
        }
        if (n%2==1)
        ans[r][c]=n*n;
        return ans;
    }
};