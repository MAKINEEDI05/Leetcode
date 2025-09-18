class Solution {
public:
    string fun(string a,int i,vector<string>& A,int n){
        if(i==n){
            for(auto b:A){
                if(a==b){
                    return "";
                }
            }
            return a;
        }
        string c=fun(a+'0',i+1,A,n);
        if(c.size()==n){
            return c;
        }
        string d=fun(a+'1',i+1,A,n);
        return d;
    }
    string findDifferentBinaryString(vector<string>& nums) {
        int a=0,i=0,n=nums.size();
        string A=fun("",0,nums,n);
        return A;
    }
};