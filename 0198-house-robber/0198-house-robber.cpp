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
        vector<int> A(n,-1);
        a=fun(0,A,nums,n);
        return a;
    }
};