class Solution {
public:
    void fun(int sum,int j,vector<int>& temp,vector<vector<int>>& A,vector<int>& candidates,int n,int target){
        if(j==n || sum>target){
            return;
        }
        if(sum==target){
            A.push_back(temp);
            return;
        }
        for(int i=j;i<n;i++){
            sum+=candidates[i];
            temp.push_back(candidates[i]);
            fun(sum,i,temp,A,candidates,n,target);
            temp.pop_back();
            sum-=candidates[i];
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int a=0,sum=0,i=0,n=candidates.size();
        vector<vector<int>> A;
        vector<int> B;
        fun(sum,i,B,A,candidates,n,target);
        return A;
    }
};