class Solution {
public:
    int digitRange(int num){
        int currMax=0,currMin=INT_MAX;
        while(num){
            int val=num%10;
            currMax=max(currMax,val);
            currMin=min(currMin,val);
            num/=10;
        }
        return currMax-currMin;
    }
    int maxDigitRange(vector<int>& nums) {
        int currMax=0,currSum=0,i=0,n=nums.size();
        for(i=0;i<n;i++){
            int val=digitRange(nums[i]);
            if(currMax==val){
                currSum+=nums[i];
            }
            else if(currMax<val){
                currMax=val;
                currSum=nums[i];
            }
        }
        return currSum;
    }
};