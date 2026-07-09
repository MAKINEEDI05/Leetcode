class Solution {
public:
    vector<string> result;
    void fun(string s,int left,int right,int n){
        if(left>n || right>n || left<right) return;
        if(s.size()==2*n){
            result.push_back(s);
            return;
        }
        fun(s+'(',left+1,right,n);
        fun(s+')',left,right+1,n);
    }
    vector<string> generateParenthesis(int n) {
        fun("",0,0,n);
        return result;
    }
};