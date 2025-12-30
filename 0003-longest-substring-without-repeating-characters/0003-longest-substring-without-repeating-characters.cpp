class Solution {
public:
    int lengthOfLongestSubstring(string A) {
        int a=0,i=0,j=0,n=A.size();
        map<int,int> B;
        for(j=0;j<n;j++){
            if(B[A[j]-'a']==0){
                B[A[j]-'a']=1;
            }
            else{
                while(i<=j){
                    if(A[i]==A[j]){
                        i++;
                        break;
                    }
                    B[A[i]-'a']=0;
                    i++;
                }
            }
            a=max(j-i+1,a);
        }
        return a;
    }
};