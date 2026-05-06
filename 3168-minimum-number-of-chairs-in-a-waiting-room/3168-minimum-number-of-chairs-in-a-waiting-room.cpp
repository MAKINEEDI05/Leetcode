class Solution {
public:
    int minimumChairs(string s) {
        int a=0,in=0;
        for(auto i:s){
            if(i=='E'){
                in++;
            }
            else{
                in--;
            }
            a=max(a,in);
        }
        return a;
    }
};