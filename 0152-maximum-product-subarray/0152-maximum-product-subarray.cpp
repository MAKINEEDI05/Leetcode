class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int a=0,i=0,n=nums.size();
        int maxnum=nums[0],minnum=nums[0];
        a=nums[0];
        for(i=1;i<n;i++){
            if(nums[i]<0){
                swap(maxnum,minnum);
            }
            maxnum=max(nums[i],maxnum*nums[i]);
            minnum=min(nums[i],minnum*nums[i]);
            a=max(a,maxnum);
        }
        return a;
    }
};