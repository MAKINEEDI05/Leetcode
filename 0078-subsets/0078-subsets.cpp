class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int a=1<<nums.size(),i=0,j=0;
        vector<vector<int>> A;
        for(i=0;i<a;i++){
            vector<int> B;
            for(j=0;j<nums.size();j++){
                if((i)&(1<<j)){
                    B.push_back(nums[j]);
                }
            }
            A.push_back(B);
        }
        return A;
    }
};