class Solution {
public:
    string largestNumber(vector<int>& nums) {
        int a=0,i=0,n=nums.size();
        vector<string> A;
        string AA="";
        for(i=0;i<n;i++){
            AA=to_string(nums[i]);
            A.push_back(AA);
        }
        AA="";
        sort(A.begin(),A.end(), []
        (string A,string B)
        {
            return A+B>B+A;
        });
        if(A[0]=="0"){
            return "0";
        }
        for(i=0;i<n;i++){
            AA+=A[i];
        }
        return AA;
    }
};