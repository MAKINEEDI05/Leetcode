class Solution {
public:
    int maxArea(vector<int>& height) {
        int a=0,b=0,r=0,l=0;
        r=height.size()-1;
        for(;l<r;){
            a=min(height[l],height[r]);
            b=max(b,a*(r-l));
            if(height[l]>height[r]){
                r--;
            }
            else{
                l++;
            }
        }
        return b;
    }
};