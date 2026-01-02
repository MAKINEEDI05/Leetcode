class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        int a=0,i=0,n=A.size();
        map<int,int> B;
        for(i=0;i<n;i++){
            B[A[i]]++;
            if(B[A[i]]==n/2){
                a=A[i];
                break;
            }
        }
        return a;
    }
};