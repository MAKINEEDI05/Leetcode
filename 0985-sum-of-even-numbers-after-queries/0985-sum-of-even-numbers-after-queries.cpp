class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int a=0,i=0,n=nums.size(),m=queries.size();
        vector<int> A(m,0);
        for(i=0;i<n;i++){
            if(nums[i]%2==0){
                a+=nums[i];
            }
        }
        cout << a;
        for(i=0;i<m;i++){
            int val=0,ind=0;
            val=queries[i][0];
            ind=queries[i][1];
            int curr=nums[ind];
            int sum=curr+val;
            if(curr%2==0){
                if(sum%2==0){
                    a+=val;
                }
                else{
                    a-=curr;
                }
            }
            else{
                if(sum%2==0){
                    a+=sum;
                }
            }
            nums[ind]+=val;
            A[i]=a;
        }
        return A;
    }
};