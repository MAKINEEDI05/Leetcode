class Solution {
public:
    int isVowel(char a){
        a=tolower(a);
        return (a=='a' || a=='e' || a=='i' || a=='o' || a=='u');
    }
    bool doesAliceWin(string s) {
        int a=0,i=0,n=s.size();
        int curr=0,b=0;
        while(i<n){
            if(isVowel(s[i])){
                a++;
            }
            i++;
        }
        return a!=0;
    }
};