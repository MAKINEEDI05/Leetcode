class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int i=0;
        vector<int> A(2*n,0);
        for(i=0;i<n;i++){
            A[2*i]=nums[i];
            A[2*i+1]=nums[n+i];
        }
        return A;
    }
};