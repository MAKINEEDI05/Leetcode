class Solution {
public:
    int fun(int a){
        int b=0;
        while(a>0){
            b=b*10+a%10;
            a=a/10;
        }
        return b;
    }
    int minMirrorPairDistance(vector<int>& nums) {
        int a=INT_MAX,i=0,n=nums.size();
        multiset<int> A;
        for(int i=0;i<n;i++){
            A.insert(nums[i]);
        }
        for(i=0;i<n;i++){
            A.erase(A.find(nums[i]));
            int val=fun(nums[i]);
            auto it=A.find(val);
            if(it!=A.end()){
                int st=find(nums.begin()+i+1,nums.end(),val)-nums.begin();
                a=min(a,abs(i-st));
            }
        }
        if(a==INT_MAX){
            a=-1;
        }
        return a;
    }
};