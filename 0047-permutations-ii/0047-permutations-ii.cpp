class Solution {
public:
    void fun(int i,set<vector<int>>& AA,vector<int>& nums,int n){
        if(i==n){
            AA.insert(nums);
            return;
        }
        for(int j=i;j<n;j++){
            swap(nums[i],nums[j]);
            fun(i+1,AA,nums,n);
            swap(nums[i],nums[j]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        int a=0,i=0,n=nums.size();
        vector<int> A;
        set<vector<int>> AA;
        vector<vector<int>> AAA;
        fun(0,AA,nums,n);
        for(auto i:AA){
            AAA.push_back(i);
        }
        return AAA;
    }
};