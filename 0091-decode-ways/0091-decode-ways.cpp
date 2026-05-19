class Solution {
public:
    int dp[101];
    int fun(string &s,int i,int n){
        if(i==n) return 1;
        if(i>n || s[i]=='0') return 0;
        if(dp[i]!=-1) return dp[i];
        int left=fun(s,i+1,n),right=0;
        if(s[i]<'2' || (s[i]<='2' && s[i+1]<='6') ){
            right=fun(s,i+2,n);
        }
        return dp[i]=left+right;
    }
    int numDecodings(string s) {
        int a=0,i=0,n=s.size();
        memset(dp,-1,sizeof(dp));
        return fun(s,0,n);
    }
};