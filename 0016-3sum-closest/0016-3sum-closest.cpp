class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int a=0,b=INT_MAX,i=0,j=0,k=0,n=nums.size();
        for(i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            j=i+1;
            k=n-1;
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                if(b>abs(sum-target)){
                    b=abs(sum-target);
                    a=sum;
                }
                if(sum<target){
                    while(j<k && nums[j]==nums[j+1]) j++;
                    j++;
                }
                else if(sum>target){
                    while(k>j && nums[k]==nums[k-1]) k--;
                    k--;
                }
                else{
                    return target;
                }
            }
        }
        return a;
    }
};