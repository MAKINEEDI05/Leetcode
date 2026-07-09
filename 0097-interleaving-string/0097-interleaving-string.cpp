class Solution {
public:
    int n,m,w;
    string str1,str2,str3;
    int dp[101][101][201];
    bool fun(string word,int i,int j,int k){
        if(i>n || j>m) return false;
        if(k==w && i==n && j==m) return true;
        if(dp[i][j][k]!=-1) return dp[i][j][k];
        bool ans=false;
        if(str1[i]==str3[k]) ans|=fun(word+str1[i],i+1,j,k+1);
        if(str2[j]==str3[k]) ans|=fun(word+str2[j],i,j+1,k+1);
        return dp[i][j][k]=ans;
    }
    bool isInterleave(string s1, string s2, string s3) {
        n=s1.size(),m=s2.size(),w=s3.size();
        str1=s1,str2=s2,str3=s3;
        memset(dp, -1, sizeof(dp));
        return fun("",0,0,0);
    }
};