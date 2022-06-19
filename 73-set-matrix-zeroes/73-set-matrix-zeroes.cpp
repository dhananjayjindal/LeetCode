class Solution {
public:
    void setToZero(vector<vector<int>>& matrix,int i,int j,int n,int m){
    
            
            for(int x=0;x<n;x++)
            matrix[i][x]=0;
            for(int x=0;x<m;x++)
            matrix[x][j]=0;
    }
    void setZeroes(vector<vector<int>>& matrix) {
        map<pair<int,int>,int>mp;
        int i,j;
        int n =matrix.size();
        int m =matrix[0].size(); 
        vector<vector<int>> copyMatrix = matrix;
        for (i=0;i<n;i++)
            for (j=0;j<m;j++)
               if(copyMatrix[i][j]==0)
                   mp[pair<int, int>(i,j)]++;
                   // setToZero(matrix,i,j,n,m);
               
        for(auto ma:mp){
         setToZero(matrix,(ma.first).first,(ma.first).second,m,n); 
            
        }
        

    
    
            
    } 
};