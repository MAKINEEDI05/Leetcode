class Solution {
public:
    int jump(vector<int>& nums) {
        int a=0,b=0,i=0,n=nums.size();
        if(n==1){
            return 0;
        }
        for(i=n-1;i>=0;i--){
            int j=i-1;
            a=-1;
            for(j=0;j<i;j++){
                if(nums[j]>=i-j){
                    i=j+1;
                    b++;
                    break;
                }
            }
        }
        return b;
    }
};