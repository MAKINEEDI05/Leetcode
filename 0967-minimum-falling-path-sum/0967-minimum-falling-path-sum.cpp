class Solution {
public:
    int fun(int a,int i,int j,vector<vector<int>>& dp,vector<vector<int>>& matrix,int n){
        if(i==n-1){
            return matrix[i][j];
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int b=0;
        int left=INT_MAX,right=INT_MAX;
        if(j-1>=0){
            left=fun(a,i+1,j-1,dp,matrix,n);
        }
        int straight=fun(a,i+1,j,dp,matrix,n);
        if(j+1<n){
            right=fun(a,i+1,j+1,dp,matrix,n);
        }
        b=min(left,min(straight,right));
        return dp[i][j]=matrix[i][j]+b;
    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int a=0,b=0,i=0,j=0,n=matrix.size();
        vector<vector<int>> dp(n,vector<int>(n,-1));
        for(i=n-2;i>=0;i--){
            for(j=0;j<n;j++){
                b=0;
                int c=INT_MAX,d=INT_MAX;
                int e=matrix[i+1][j];
                if(j-1>=0){
                    c=matrix[i+1][j-1];
                }
                if(j+1<n){
                    d=matrix[i+1][j+1];
                }
                b=min(c,min(d,e));
                matrix[i][j]+=b;
            }
        }
        a=matrix[0][0];
        for(auto i:matrix[0]){
            a=min(a,i);
        }
        return a;
    }
};