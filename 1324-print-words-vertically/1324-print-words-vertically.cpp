class Solution {
public:
    vector<string> printVertically(string s) {
        int a=0,i=0,n=0;
        for(i=0;i<s.size();i++){
            if(s[i]==' '){
                n=max(a,n);
                a=0;
            }
            else{
                a++;
            }
        }
        n=max(a,n);
        vector<string> A(n);
        int iterationCount=0;
        int j=0;
        for(i=0;i<s.size();i++){
            if(s[i]==' '){
                j=0;
                iterationCount++;
                continue;
            }
            A[j]+=string((iterationCount-A[j].size()),' ')+s[i];
            j++;
        }
        return A;
    }
};