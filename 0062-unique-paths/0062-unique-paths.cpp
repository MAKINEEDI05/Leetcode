class Solution {
public:
    int fun(vector<vector<int>>& dp,int i,int j,int m, int n){
        if(i<0 || i>=m || j<0 || j>=n){
            return 0;
        }
        if(i==m-1 && j==n-1){
            return 1;
        }
        if(dp[i][j]!=0){
            return dp[i][j];
        }
        return dp[i][j]=fun(dp,i+1,j,m,n)+fun(dp,i,j+1,m,n);
    }
    int uniquePaths(int m, int n) {
        int a=0,i=0,j=0;
        vector<vector<int>> dp(m+1,vector<int>(n+1,0));
        a=fun(dp,0,0,m,n);
        return a;
    }
};