class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int a=0,n=nums.size(),left=0,right=0,i=0;
        for(i=0;i<n;i++){
            right+=nums[i];
        }
        for(i=0;i<n-1;i++){
            right-=nums[i];
            left+=nums[i];
            if(abs(left-right)%2==0){
                a++;
            }
        }
        return a;
    }
};