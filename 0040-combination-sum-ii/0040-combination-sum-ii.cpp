class Solution {
public:
    void fun(int sum,int i,vector<int>& temp,set<vector<int>>& A,vector<int>& candidates,int target,int n){
        if(sum==target){
            A.insert(temp);
            return;
        }
        if(i==n || sum>target){
            return;
        }
        for(int j=i;j<n;j++){
            if (j > i && candidates[j] == candidates[j-1]) continue;
            temp.push_back(candidates[j]);
            fun(sum+candidates[j],j+1,temp,A,candidates,target,n);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        int a=0,i=0,n=candidates.size();
        vector<vector<int>> C;
        set<vector<int>> A;
        vector<int> B;
        fun(0,0,B,A,candidates,target,n);
        for(auto i:A){
            C.push_back(i);
        }
        return C;
    }
};