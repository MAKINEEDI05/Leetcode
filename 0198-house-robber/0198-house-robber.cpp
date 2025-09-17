class Solution {
public:
    int fun(int i,vector<int>& A,vector<int>& nums,int n){
        if(i>=n){
            return 0;
        }
        if(A[i]!=-1){
            return A[i];
        }
        int left=nums[i]+fun(i+2,A,nums,n);
        int right=fun(i+1,A,nums,n);
        return A[i]=max(left,right);
    }
    int rob(vector<int>& nums) {
        int a=0,i=0,n=nums.size();
        vector<int> A(n,0);
        A[0]=nums[0];
        if(n==1){
            return nums[0];
        }
        A[1]=max(nums[0],nums[1]);
        for(i=2;i<n;i++){
            int take=nums[i]+A[i-2];
            int nottake=A[i-1];
            A[i]=max(take,nottake);
        }
        return A[n-1];
    }
};