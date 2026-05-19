class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int a=1,i=0,j=0,n=nums.size();
        vector<int> A(n,1);
        for(i=1;i<n;i++){
            for(j=0;j<i;j++){
                if(nums[j]<nums[i]) A[i]=max(A[i],A[j]+1);
            }
            a=max(a,A[i]);
        }
        return a;
    }
};