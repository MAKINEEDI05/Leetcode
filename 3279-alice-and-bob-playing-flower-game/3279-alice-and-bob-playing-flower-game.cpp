class Solution {
public:
    long long flowerGame(int n, int m) {
        long a=0;
        int i=0;
        int b=m%2==0;
        if(n==1 && m==1){
            return 0;
        }
        for(i=1;i<=n;i++){
            if(i%2==0){
                a+=m/2+m%2;
            }
            else{
                a+=m/2;
            }
        }
        return a;
    }
};