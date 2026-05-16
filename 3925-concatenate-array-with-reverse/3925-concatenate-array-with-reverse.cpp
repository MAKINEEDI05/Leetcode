class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        int a=nums.size();
        while(a){
            nums.push_back(nums[a-1]);
            a--;
        }
        return nums;
    }
};