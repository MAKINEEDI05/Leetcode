class Solution {
public:
    long long sumAndMultiply(int n) {
        long long a=0,b=0,i=0;
        while(n){
            int val=n%10;
            if(val==0){ n=n/10; continue; }
            a=pow(10,i)*val+a;
            b+=val;
            i++;
            n/=10;
        }
        a=a*b;
        return a;
    }
};