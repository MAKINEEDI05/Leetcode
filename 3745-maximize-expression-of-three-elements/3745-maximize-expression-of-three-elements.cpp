class Solution {
public:
    int maximizeExpressionOfThree(vector<int>& nums) {
        int a=-100,b=-100,c=0,i=0,n=nums.size();
        c=100;
        for(i=0;i<n;i++){
            if(nums[i]>=a){
                b=a;
                a=nums[i];
            }
            else if(nums[i]>b){
                b=nums[i];
            }
            if(nums[i]<c){
                c=nums[i];
            }
        }
        return a+b-c;
    }
};