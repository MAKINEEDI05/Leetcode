class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i=0,j=0,n=nums.size();
        int curr=0;
        for(i=0;i<n;i++){
            if(nums[i]==1){
                j++;
                if(curr<j){
                    curr=j;
                }
            }
            else{
                j=0;
            }
        }
        return curr;
    }
};