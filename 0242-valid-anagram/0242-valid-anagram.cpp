class Solution {
public:
    bool isAnagram(string s, string t) {
        int a=0,i=0,n=s.size();
        if(s.size()!=t.size()){
            return 0;
        }
        vector<int> A(26,0);
        for(i=0;i<n;i++){
            A[s[i]-'a']++;
            A[t[i]-'a']--;
        }
        for(i=0;i<26;i++){
            if(A[i]!=0){
                return 0;
            }
        }
        return 1;
    }
};