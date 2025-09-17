class Solution {
public:
    int fun(vector<int>& A){
        int a=0,i=0,n=A.size();
        if(n==1){
            return A[0];
        }
        int curr=0,prev=0,prev2=0;
        prev2=A[0];
        prev=max(A[0],A[1]);
        curr=max(prev,prev2);
        for(i=2;i<n;i++){
            curr=max(A[i]+prev2,prev);
            prev2=prev;
            prev=curr;
        }
        return curr;
    }
    int rob(vector<int>& nums) {
        int a=0,i=0,n=nums.size();
        vector<int> A,B;
        if(n==1){
            return nums[0];
        }
        for(i=0;i<n;i++){
            if(i!=n-1){
                A.push_back(nums[i]);
            }
            if(i!=0){
                B.push_back(nums[i]);
            }
        }
        return max(fun(A),fun(B));
    }
};