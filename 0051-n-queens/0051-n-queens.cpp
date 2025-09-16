class Solution {
public:
    vector<vector<string>> AA;
    bool fun2(int a,int i,vector<string>& A,int n){
        int ii=a,jj=i;
        for(ii=0;ii<a;ii++){
            if(A[ii][i]=='Q'){
                return 0;
            }
        }
        for(ii=a-1,jj=i-1;ii>=0 && jj>=0;ii--,jj--){
            if(A[ii][jj]=='Q'){
                return 0;
            }
        }
        for(ii=a-1,jj=i+1;ii>=0 && jj<n;ii--,jj++){
            if(A[ii][jj]=='Q'){
                return 0;
            }
        }
        return 1;
    }
    void fun(int a,int i,vector<string>& A,int n){
        if(a==n){
            AA.push_back(A);
            return;
        }
        // if(!fun2(a,i,A,n)){
        //     return;
        // }
        for(int j=i;j<n;j++){
            if(fun2(a,j,A,n)){
                A[a][j]='Q';
                fun(a+1,0,A,n);
                A[a][j]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        int a=0,i=0;
        vector<string> A(n,string(n,'.'));
        fun(0,0,A,n);
        return AA;
    }
};