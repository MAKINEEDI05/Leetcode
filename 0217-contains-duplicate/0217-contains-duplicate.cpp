class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int a=0,i=0,n=nums.size();
        set<int> A;
        for(i=0;i<n;i++){
            if(A.find(nums[i])!=A.end()){
                return 1;
            }
            A.insert(nums[i]);
        }
        return 0;
    }
};