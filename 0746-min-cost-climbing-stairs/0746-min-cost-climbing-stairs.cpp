class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int a=0,i=0,n=cost.size();
        vector<int> A(n,0);
        A[0]=cost[0];
        A[1]=cost[1];
        for(i=2;i<n;i++){
            A[i]=cost[i]+min(A[i-1],A[i-2]);
        }
        a=min(A[n-1],A[n-2]);
        return a;
    }
};