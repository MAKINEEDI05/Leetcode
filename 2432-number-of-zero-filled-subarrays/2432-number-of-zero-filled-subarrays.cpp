class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        int i=0,j=-1,n=nums.size();
        long long a=0;
        for(i=0;i<n;i++){
            if(nums[i]==0){
                if(j==-1){
                    j=i;
                }
                continue;
            }
            else{
                if(j!=-1){
                    int val=i-j;
                    a=a+1LL*val*(val+1)/2;
                }
                j=-1;
            }
        }
        if(j!=-1){
            int val=i-j;
            a=a+1LL*val*(val+1)/2;
        }
        return a;
    }
};