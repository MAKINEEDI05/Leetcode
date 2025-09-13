class Solution {
public:
    int fun(int a,vector<vector<int>>& A,vector<vector<int>>& obstacleGrid,int i,int j,int n,int m){
        if(i==n || j==m || obstacleGrid[i][j]==1){
            return 0;
        }
        if(i==n-1 && j==m-1){
            return 1;
        }
        if(A[i][j]!=-1){
            return A[i][j];
        }
        A[i][j]=fun(a,A,obstacleGrid,i+1,j,n,m)+fun(a,A,obstacleGrid,i,j+1,n,m);
        return A[i][j];
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int a=0,i=0,n=obstacleGrid.size(),m=obstacleGrid[0].size();
        vector<vector<int>> A(n,vector<int>(m,-1));
        return fun(a,A,obstacleGrid,0,0,n,m);
    }
};