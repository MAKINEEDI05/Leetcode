class Solution {
public:
    int fun(int i,vector<int>& A,vector<int>& cost,int n){
        if(i>=n){
            return 0;
        }
        if(A[i]!=-1){
            return A[i];
        }
        int a=fun(i+1,A,cost,n);
        int b=fun(i+2,A,cost,n);
        A[i]=cost[i]+min(a,b);
        return A[i];
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int a=0,i=0,n=cost.size();
        vector<int> A(n,-1);
        a=fun(i,A,cost,n);
        return min(A[0],A[1]);
    }
};