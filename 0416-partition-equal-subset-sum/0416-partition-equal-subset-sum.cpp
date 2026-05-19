class Solution {
public:
    bool fun(vector<int>& A,vector<vector<int>>& dp,int i,int n,int sum){
        if(sum==0) return 1;
        if(i>=n || sum<0) return 0;
        if(dp[i][sum]!=-1) return dp[i][sum];
        bool a=fun(A,dp,i+1,n,sum-A[i]);
        bool b=fun(A,dp,i+1,n,sum);
        dp[i][sum]=a||b;
        return dp[i][sum];
    }
    bool canPartition(vector<int>& nums) {
        int a=0,i=0,n=nums.size();
        for(i=0;i<n;i++){
            a+=nums[i];
        }
        vector<vector<int>> dp(n,vector<int>(a+1,-1));
        if(a%2==1){
            return 0;
        }
        return fun(nums,dp,0,n,a/2);
    }
};