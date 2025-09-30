class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int a=0,i=0,j=0,n=nums.size();
        while(n--){
            j=0;
            for(i=0;i<n;i++){
                nums[j]=(nums[i]+nums[i+1])%10;
                j++;
            }
        }
        return nums[0];
    }
};