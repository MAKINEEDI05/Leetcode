class Solution {
public:
    vector<bool> pathExistenceQueries(int n, vector<int>& nums, int maxDiff, vector<vector<int>>& queries) {
        int a=0,i=0,q=queries.size();
        vector<int> A(n,0);
        vector<bool> B(q,false);
        for(i=1;i<n;i++){
            if((nums[i]-nums[i-1])<=maxDiff){
                A[i]=A[i-1]+1;
            }
        }
        for(i=0;i<q;i++){
            int left=queries[i][0],right=queries[i][1];
            int currVal=(right-left);
            int reqVal=(A[right]-A[left]);
            if(currVal==reqVal){
                B[i]=true;
            }
        }
        return B;
    }
};