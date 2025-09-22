class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int a=0,b=0,i=0,n=nums.size();
        map<int,int> A;
        for(i=0;i<n;i++){
            A[nums[i]]++;
            b=max(b,A[nums[i]]);
        }
        for(auto i:A){
            if(i.second==b){
                a+=b;
            }
        }
        return a;
    }
};