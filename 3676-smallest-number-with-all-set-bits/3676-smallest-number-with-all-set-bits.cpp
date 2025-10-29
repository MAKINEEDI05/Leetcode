class Solution {
public:
    int smallestNumber(int n) {
       int a=0,i=0;
       while(n){
        a+=pow(2,i);
        i++;
        n=n>>1;
       }
       if(a<n){
        a+=pow(2,i);
       }
       return a;
    }
};