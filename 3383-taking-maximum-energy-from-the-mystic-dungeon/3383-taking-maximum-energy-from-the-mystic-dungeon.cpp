class Solution {
public:
    int fun(int a,int i,vector<int>& A,vector<int>& energy,int n,int k){
        if(i>=n){
            return 0;
        }
        if(A[i]!=0){
            return A[i];
        }
        A[i]=energy[i]+fun(a,i+k,A,energy,n,k);
        return A[i];
    }
    int maximumEnergy(vector<int>& energy, int k) {
        int a=0,b=0,i=0,n=energy.size();
        a=INT_MIN;
        vector<int> A(n,0);
        for(i=0;i<n;i++){
            b=fun(a,i,A,energy,n,k);
            a=max(a,b);
        }
        return a;
    }
};