class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int a=0,i=0,n=nums.size();
        vector<int> A(n,0);
        for(i=0;i<n;i++){
            if(nums[i]>n || nums[i]<=0){
                continue;
            }
            if(A[nums[i]-1]>0){
                continue;
            }
            A[nums[i]-1]++;
            a++;
        }
        if(a==n){
            return n+1;
        }
        for(i=0;i<n;i++){
            if(A[i]==0){
                return i+1;
            }
        }
        return -1;
    }
};