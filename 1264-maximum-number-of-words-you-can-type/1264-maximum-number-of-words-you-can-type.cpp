class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        vector<int> A(26,0);
        for(auto i:brokenLetters){
            A[i-'a']++;
        }
        int a=0,b=0,i=0,n=text.size();
        for(i=0;i<n;i++){
            if(text[i]==' ' && b==0){
                  a++;
                  continue;
            }
            if(A[text[i]-'a']){
                while(text[i]!=' ' && i<n){
                    i++;
                }
            }
            if(i==n-1){
                b=1;
            }
        }
        if(b==1){
            a++;
        }
        return a;
    }
};