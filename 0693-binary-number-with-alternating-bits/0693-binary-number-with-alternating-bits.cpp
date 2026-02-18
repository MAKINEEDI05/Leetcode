class Solution {
public:
    bool hasAlternatingBits(int n) {
        int a=n&1;
        while(n){
            int b=n&1;
            if(b!=a){
                return 0;
            }
            a=!a;
            n=n>>1;
        }
        return 1;
    }
};