class Solution {
public:
    int hammingDistance(int x, int y) {
        int a=0;
        while(x || y){
            if((x&1)!=(y&1)){
                a++;
            }
            x=x>>1;
            y=y>>1;
        }
        return a;
    }
};