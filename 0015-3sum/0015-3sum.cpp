class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int a=0,i=0,j=0,k=0,n=nums.size();
        vector<vector<int>> A;
        for(i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            j=i+1;
            k=n-1;
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                if(sum<0){
                    j++;
                }
                else if(sum>0){
                    k--;
                }
                else{
                    A.push_back({nums[i],nums[j],nums[k]});
                    while(j<k && nums[j]==nums[j+1]) j++;
                    while(k>j && nums[k]==nums[k-1]) k--;
                    j++;
                    k--;
                }
            }
        }
        return A;
    }
};