class Solution {
public:
    int fun(int b,int i,vector<int>& nums,int n){
        if(i==n){
            return b;
        }
        int val1=fun(b^nums[i],i+1,nums,n);
        int val2=fun(b,i+1,nums,n);
        return val1+val2;
    }
    int subsetXORSum(vector<int>& nums) {
        int a=0,b=0,i=0,n=nums.size();
        a=fun(b,i,nums,n);
        return a;
    }
};