class Solution {
public:
    vector<int> nums={1,2,3,4,5,6,7,8,9};
    void fun(int sum,int i,vector<int>& temp,vector<vector<int>>& A,int n,int target){
        if(temp.size()>n || sum>target){
            return;
        }
        if(sum==target && temp.size()==n){
            A.push_back(temp);
            return;
        }
        for(int j=i;j<9;j++){
            if(sum+nums[j]>target){
                break;
            }
            temp.push_back(nums[j]);
            fun(sum+nums[j],j+1,temp,A,n,target);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        int a=0;
        vector<vector<int>> A;
        vector<int> temp;
        fun(0,0,temp,A,k,n);
        return A;
    }
};