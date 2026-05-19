class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int a=0,i=0,n=nums.size();
        map<int,int> A;
        for(i=0;i<n;i++){
            a=target-nums[i];
            if(A[a]!=0){
                return {A[a]-1,i};
            }
            A[nums[i]]=i+1;
        }
        return {};
    }
};