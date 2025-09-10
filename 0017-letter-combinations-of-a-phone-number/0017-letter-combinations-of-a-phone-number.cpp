class Solution {
public:
    void fun(string digits,vector<string>& A,vector<char>& B,string curr,int a,int n){
        if(curr.size()==n){
            A.push_back(curr);
            return;
        }
        int i=0,val=(digits[a]-'2')*3;
        int limit=3;
        if(val==15 || val==21){
            limit=4;
        }
        if(val>15){
            val+=1;
        }
        for(i=val;i<val+limit;i++){
            fun(digits,A,B,curr+B[i],a+1,n);
        }
    }
    vector<string> letterCombinations(string digits) {
        int a=0,i=0,n=digits.size();
        if(n==0){
            return {};
        }
        vector<string> A;
        vector<char> B;
        for(i=0;i<26;i++){
            B.push_back('a'+i);
        }
        fun(digits,A,B,"",0,n);
        return A;
    }
};