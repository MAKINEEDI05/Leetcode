class Solution {
public:
    set<int> A;
    int fun(int a){
        int aa=a,i=0;
        for(i=1;i<=sqrt(a);i++){
            if(a%i==0){
                if(A.find(i)!=A.end()){
                    aa=min(aa,i);
                }
                if(A.find(a/i)!=A.end()){
                    aa=min(aa,a/i);
                }
            }
        }
        return aa;
    }
    long long minArraySum(vector<int>& nums) {
        long long a=0,i=0;
        sort(nums.begin(),nums.end());
        for(i=0;i<nums.size();i++){
            A.insert(nums[i]);
        }
        for(i=0;i<nums.size();i++){
            int val=fun(nums[i]);
            nums[i]=val;
            a+=nums[i];
        }
        return a;
    }
};