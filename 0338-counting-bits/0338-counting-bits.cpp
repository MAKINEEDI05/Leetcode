class Solution {
public:
    vector<int> countBits(int n) {
        int i=0;
        vector<int> A(n+1,0);
        for(i=1;i<n+1;i++){
            A[i]=A[i>>1]+(i&1);
        }
        return A;
    }
};