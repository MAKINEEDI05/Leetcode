class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        int a=0,i=0,n=nums.size();
        set<int> A;
        vector<int> B;
        for(auto i:nums){
            if(!A.count(i)){
                A.insert(i);
                B.push_back(i);
            }
        }
        a=B.size();
        k=min(a,k);
        sort(B.rbegin(),B.rend());
        B.resize(k);
        return B;
    }
};