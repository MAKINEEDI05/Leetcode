class Solution {
public:
    int fun(vector<int>& nums,vector<int>& A,int i,int n){
        if(i>=n) return 0;
        if(A[i]!=-1) return A[i];
        int left=nums[i]+fun(nums,A,i+2,n);
        int right=fun(nums,A,i+1,n);
        A[i]=max(left,right);
        return A[i];
    }
    int rob(vector<int>& nums) {
        int a=0,n=nums.size();
        vector<int> A(n,-1);
        return fun(nums,A,0,n);
    }
};