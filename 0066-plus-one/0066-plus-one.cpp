class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int a=0,i=0;
        int curr=0,remainder=1;
        int n=digits.size();
        for(i=n-1;i>=0;i--){
            curr=digits[i]+remainder;
            remainder=curr>9?1:0;
            curr=curr%10;
            digits[i]=curr;
        }
        if(remainder){
            digits.insert(digits.begin(),1);
        }
        return digits;
    }
};