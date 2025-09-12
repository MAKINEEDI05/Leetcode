class Solution {
public:
    bool canJump(vector<int>& nums) {
        int a=0,i=0,n=nums.size();
        if(nums[0]==0){
            return n==1;
        }
        for(i=0;i<n-1;i++){
            if(nums[i]==0){
                int j=i-1;
                a=0;
                while(j>=0){
                    if(nums[j]>i-j){
                        a=1;
                    }
                    j--;
                }
                if(a==0){
                    return 0;
                }
            }
        }
        return 1;
    }
};