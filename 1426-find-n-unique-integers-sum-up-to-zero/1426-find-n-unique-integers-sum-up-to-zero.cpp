class Solution {
public:
    vector<int> sumZero(int n) {
        int a=0,b=n/2;
        vector<int> A;
        while(b--){
            a++;
            A.push_back(a);
            A.push_back(-a);
        }
        if(n%2==1){
            A.push_back(0);
        }
        return A;
    }
};