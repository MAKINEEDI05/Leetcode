class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int a=0,i=0;
        vector<int> A(nums);
        A.insert(A.begin(),nums.begin(),nums.end());
        return A;
    }
};