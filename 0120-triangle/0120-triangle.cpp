class Solution {
public:
    int fun(int a,int i,int j,vector<vector<int>>& dp,vector<vector<int>>& triangle,int n){
        if(i==n-1){
            return dp[i][j]=triangle[i][j];
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        a+=triangle[i][j];
        int left=fun(a,i+1,j,dp,triangle,n);
        int right=fun(a,i+1,j+1,dp,triangle,n);
        return dp[i][j]=triangle[i][j]+min(left,right);
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int a=0,i=0,j=0,n=triangle.size();
        vector<vector<int>> dp(n,vector<int>(n,-1));
        for(i=n-2;i>=0;i--){
            for(j=0;j<=i;j++){
                triangle[i][j]+=min(triangle[i+1][j],triangle[i+1][j+1]);
            }
        }
        return triangle[0][0];
    }
};