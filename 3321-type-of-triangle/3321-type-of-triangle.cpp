class Solution {
public:
    string triangleType(vector<int>& nums) {
        bool valid1=(nums[0]+nums[1])>nums[2];
        bool valid2=(nums[0]+nums[2])>nums[1];
        bool valid3=(nums[1]+nums[2])>nums[0];
        bool equal1=nums[0]==nums[1];
        bool equal2=nums[1]==nums[2];
        bool equal3=nums[0]==nums[2];
        bool valid=valid1&&valid2&&valid3;
        if(valid){
            if(equal1 && equal2 && equal3){
                return "equilateral";
            }
            else if(equal1 || equal2 || equal3){
                return "isosceles";
            }
            else{
                return "scalene";
            }
        }
        return "none";
    }
};