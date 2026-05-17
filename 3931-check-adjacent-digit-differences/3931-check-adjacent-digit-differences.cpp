class Solution {
public:
    bool isAdjacentDiffAtMostTwo(string s) {
        int a=0,i=0,n=s.size();
        for(i=1;i<n;i++){
            int b=s[i-1]-'0';
            int c=s[i]-'0';
            if(abs(b-c)>2){
                return 0;
            }
        }
        return 1;
    }
};