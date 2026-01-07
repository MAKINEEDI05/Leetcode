class Solution {
public:
    string largestEven(string s) {
        int a=0,i=0,n=s.size();
        for(i=n-1;i>=0;i--){
            if((s[i]-'0')%2==0){
                return s.substr(0,i+1);
            }
        }
        return "";
    }
};