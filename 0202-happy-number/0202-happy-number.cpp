class Solution {
public:
    int powerNum(int n){
        int a=0;
        while(n){
            int val=n%10;
            a+=val*val;
            n/=10;
        }
        return a;
    }
    bool isHappy(int n) {
        set<int> A;
        int a=n;
        while(a!=1){
            if(A.find(a)!=A.end()) return 0;
            A.insert(a);
            a=powerNum(a);
            
        }
        return 1;
    }
};