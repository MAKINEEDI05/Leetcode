class Solution {
public:
    int rob(vector<int>& nums) {
        int a=0,b=0,i=0,n=nums.size();
        if(n<=2){
            return (n==1)?nums[0]:max(nums[0],nums[1]);
        }
        for(i=0;i<n;i++){
            a=0;
            b=0;
            if(i-2>=0) a=nums[i-2];
            if(i-3>=0) b=nums[i-3];
            nums[i]+=max(a,b);
        }
        a=max(nums[n-1],nums[i-2]);
        return a;
    }
};