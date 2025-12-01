class Solution {
public:
    int maxDistinct(string s) {
        int a=0,i=0,n=s.size();
        set<char> A;
        for(i=0;i<n;i++){
            A.insert(s[i]);
        }
        return A.size();
    }
};