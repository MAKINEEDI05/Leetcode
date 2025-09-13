class Solution {
public:
    int fun(vector<vector<int>>& A,vector<vector<int>>& grid,int i,int j,int n,int m){
        if(i==n || j==m){
            return INT_MAX;
        }
        if(i==n-1 && j==m-1){
            return grid[n-1][m-1];
        }
        int b=fun(A,grid,i+1,j,n,m);
        int c=fun(A,grid,i,j+1,n,m);
        A[i][j]=min(b,c)+grid[i][j];
        return A[i][j];
    }
    int minPathSum(vector<vector<int>>& grid) {
        int a=0,i=0,j=0,n=grid.size(),m=grid[0].size();
        for(i=1;i<m;i++){
            grid[0][i]=grid[0][i-1]+grid[0][i];
        }
        for(i=1;i<n;i++){
            grid[i][0]=grid[i-1][0]+grid[i][0];
        }
        for(i=1;i<n;i++){
            for(j=1;j<m;j++){
                grid[i][j]=min(grid[i-1][j],grid[i][j-1])+grid[i][j];
            }
        }
        return grid[n-1][m-1];
    }
};