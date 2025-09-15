class Solution {
public:
    void fun(int i,vector<int>& AA,vector<vector<int>>& A,vector<int>& nums,int n){
        if(i==n){
            A.push_back(AA);
            return;
        }
        AA.push_back(nums[i]);
        fun(i+1,AA,A,nums,n);
        AA.pop_back();
        fun(i+1,AA,A,nums,n);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
      int a=0,i=0,n=nums.size();
      vector<int> AA;
      vector<vector<int>> A;
      fun(0,AA,A,nums,n);
      return A;  
    }
};