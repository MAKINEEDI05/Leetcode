class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int a=0,i=0,j=0;
        int n=nums.size();
        map<int,int> mp;
        for(auto it:nums){
            mp[it]++;
        }
        for(i=0;i<n;i++){
            if(mp[target-nums[i]]!=0){
                for(j=0;j<n && i!=j;j++){
                    if(nums[j]==target-nums[i]){
                        return {i,j};
                    }
                }
            }
        }
        return {};
    }
};