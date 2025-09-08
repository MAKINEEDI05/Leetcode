class Solution {
public:
    int minOperations(vector<int>& nums) {
        int a=nums[0];
        for(auto i:nums){
            if(a!=i){
                return 1;
            }
        }
        return 0;
    }
};