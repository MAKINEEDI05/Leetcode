class Solution {
public:
    int fun(vector<vector<int>>& A,int i,int j,int m,int n){
        if(i>=m || j>=n) return 0;
        if(i==m-1 || j==n-1) return 1;
        if(A[i][j]!=-1) return A[i][j];
        int right=fun(A,i+1,j,m,n);
        int left=fun(A,i,j+1,m,n);
        A[i][j]=right+left;
        return A[i][j];
    }
    int uniquePaths(int m, int n) {
        int a=0,i=0,j=0;
        vector<vector<int>> A(m,vector<int>(n,-1));
        return fun(A,0,0,m,n);
    }
};