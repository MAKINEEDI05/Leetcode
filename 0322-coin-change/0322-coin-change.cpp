class Solution {
public:
    int fun(vector<int>& coins,vector<int> & A,int amount){
        if(amount==0) return 0;
        if(amount<0) return INT_MAX;
        if(A[amount]!=-1) return A[amount];
        int a=0,i=0,n=coins.size();
        a=INT_MAX;
        for(i=0;i<n;i++){
            int val=fun(coins,A,amount-coins[i]);
            if(val!=INT_MAX) a=min(a,val+1);
        }
        A[amount]=a;
        return A[amount];
    }
    int coinChange(vector<int>& coins, int amount) {
        int a=0,i=0,n=coins.size();
        vector<int> A(amount+1,-1);
        if(amount==0) return 0;
        a=fun(coins,A,amount);
        if(a==INT_MAX) return -1;
        return a;
    }
};