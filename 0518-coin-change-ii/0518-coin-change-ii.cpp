class Solution {
public:
    int fun(vector<int>& coins,vector<vector<int>>& A,int i,int n,int amount){
        if(i>=n || amount<0) return 0;
        if(amount==0) return 1;
        if(A[i][amount]!=-1) return A[i][amount];
        A[i][amount]=fun(coins,A,i,n,amount-coins[i])+fun(coins,A,i+1,n,amount);
        return A[i][amount];
    }
    int change(int amount, vector<int>& coins) {
        int a=0,i=0,n=coins.size();
        vector<vector<int>> A(n,vector<int>(amount+1,-1));
        return fun(coins,A,i,n,amount);
    }
};