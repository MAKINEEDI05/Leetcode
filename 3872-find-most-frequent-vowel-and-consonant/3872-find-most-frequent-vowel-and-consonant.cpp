class Solution {
public:
    int isVowel(char a){
        return (a=='a' || a=='e' || a=='i' || a=='o' || a=='u');
    }
    int maxFreqSum(string s) {
        int a=0,b=0,i=0,n=s.size();
        map<char,int> A,B;
        for(i=0;i<n;i++){
            if(isVowel(s[i])){
                A[s[i]]++;
                a=max(a,A[s[i]]);
            }
            else{
                B[s[i]]++;
                b=max(b,B[s[i]]);
            }
        }
        return a+b;
    }
};