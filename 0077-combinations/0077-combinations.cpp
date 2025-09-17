class Solution {
public:
    void fun(int i,vector<int>& A,vector<vector<int>>& AA,int n,int k){
        if(A.size()==k){
            AA.push_back(A);
            return;
        }
        for(int j=i;j<n;j++){
            A.push_back(j+1);
            fun(j+1,A,AA,n,k);
            A.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        int a=0,i=0;
        vector<int> A;
        vector<vector<int>> AA;
        fun(i,A,AA,n,k);
        return AA;
    }
};