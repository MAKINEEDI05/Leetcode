class Solution {
public:
    int fun(vector<vector<char>>& grid,int i,int j,int n,int m){
        if(i<0 || j<0 || i>=n || j>=m || grid[i][j]=='0'){
            return 0;
        }
        int k=0;
        grid[i][j]='0';
        vector<vector<int>> A={{0,1},{1,0},{0,-1},{-1,0}};
        for(k=0;k<4;k++){
            int a=fun(grid,i+A[k][0],j+A[k][1],n,m);
        }
        return 1;
    }
    int numIslands(vector<vector<char>>& grid) {
        int a=0,i=0,j=0,n=grid.size(),m=grid[0].size();
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(grid[i][j]=='1'){
                    a+=fun(grid,i,j,n,m);
                }
            }
        }
        return a;
    }
};