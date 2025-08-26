class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int a=0,i=0,j=0,n=s.size();
        map<char,int> A;
        if(n<=1){
            return n;
        }
        for(i=0;i<n;i++){
            if(A[s[i]]==0){
                A[s[i]]++;
            }
            else{
                while(s[j]!=s[i]){
                    A[s[j]]--;
                    j++;
                }
                j++;
            }
            if(i-j>a){
                a=i-j;
            }
        }
        return a+1;
    }
};