class Solution {
public:
    bool fun2(int i,int j,vector<string>& A,int n){
        int ii=i,jj=j;
        for(ii=i-1;ii>=0;ii--){
            if(A[ii][jj]=='Q'){
                return 0;
            }
        }
        for(ii=i-1,jj=j-1;ii>=0 && jj>=0;ii--,jj--){
            if(A[ii][jj]=='Q'){
                return 0;
            }
        }
        for(ii=i-1,jj=j+1;ii>=0 && jj<n;ii--,jj++){
            if(A[ii][jj]=='Q'){
                return 0;
            }
        }
        return 1;
    }
    int fun(int a,int i,vector<string>& A,int n){
        if(a==n){
            return 1;
        }
        int b=0;
        for(int j=0;j<n;j++){
            if(fun2(a,j,A,n)){
                A[a][j]='Q';
                b+=fun(a+1,j,A,n);
                A[a][j]='.';
            }
        }
        return b;
    }
    int totalNQueens(int n) {
        int a=0,i=0;
        vector<string> A(n,string(n,'.'));
        a=fun(0,0,A,n);
        return a;
    }
};