class Solution {
public:
    void fun(string s,set<pair<int,int>>& A,int left,int right,int n){
        while(left>=0 && right<n && s[left]==s[right]){
            A.insert({left,right});
            left--;
            right++;
        }
    }
    int countSubstrings(string s) {
        int a=0,i=0,n=s.size();
        set<pair<int,int>> A;
        for(i=0;i<n;i++){
            fun(s,A,i,i,n);
            fun(s,A,i,i+1,n);
        }
        a=A.size();
        return a;
    }
};