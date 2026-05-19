class Solution {
public:
    int fun(string s,vector<int>& A,int i,int n){
        if(i==n) return 1;
        if(i>n || s[i]=='0') return 0;
        if(A[i]!=-1) return A[i];
        int left=fun(s,A,i+1,n),right=0;
        if(s[i]<'2' || (s[i]<='2' && s[i+1]<='6') ){
            right=fun(s,A,i+2,n);
        }
        return A[i]=left+right;
    }
    int numDecodings(string s) {
        int a=0,i=0,n=s.size(); 
        vector<int> A(n,-1);
        return fun(s,A,0,n);
    }
};