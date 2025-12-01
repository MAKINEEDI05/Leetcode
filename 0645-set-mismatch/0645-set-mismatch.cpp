class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int a=0,b=0,i=0,n=nums.size();
        a=n*(n+1)/2;
        set<int> A;
        for(i=0;i<n;i++){
            if(A.find(nums[i])==A.end()){
                A.insert(nums[i]);
                a-=nums[i];
            }
            else{
                b=nums[i];
            }
        }
        return {b,a};
    }
};