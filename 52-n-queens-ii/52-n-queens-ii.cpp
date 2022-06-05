class Solution {
public:
        bool isSafe(int row,int col,int n,vector<string> &board){
        int r=row;
        int c=col;
        while(col>=0 && row>=0){
            if(board[row][col]=='Q')
                return false;
            col--;
            row--;
        }
        col=c;
        row=r;
        while(col>=0){
            if(board[row][col]=='Q')
                return false;
            col--;
        }
        row=r;
        col=c;
        while(row<n && col>=0){
            if(board[row][col]=='Q')
                return false;
            col--;
            row++;
        }
        return true;
    }
    void solve(int col,int &ans,vector<string> &board,int n){
        if(col==n){
            ans++;
            return;
        }
        for(int row=0;row<n;row++){
            if(isSafe(row,col,n,board)){
                board[row][col]='Q';
                solve(col+1,ans,board,n);
                board[row][col]='.';
            }
        }
    }
    int totalNQueens(int n) {
         int ans=0;
        vector<string> board(n);
        string s(n,'.');
        for(int i=0;i<n;i++)
            board[i]=s;
        solve(0,ans,board,n);
        return ans; 
    }
};