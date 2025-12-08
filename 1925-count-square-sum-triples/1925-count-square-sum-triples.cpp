class Solution {
public:
    int countTriples(int n) {
        int a=0,i=0,j=0;
        for(i=1;i<=n;i++){
            for(j=i+1;j<=n;j++){
                for(int k=j+1;k<=n;k++){
                    if(sqrt(i*i+j*j)==k){
                        cout << i << j << k;
                        a++;
                    }
                }
            }
        }
        return a*2;
    }
};