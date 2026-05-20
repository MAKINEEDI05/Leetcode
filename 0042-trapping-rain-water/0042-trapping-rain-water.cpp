class Solution {
public:
    int trap(vector<int>& height) {
        int a=0,i=0,j=0,n=height.size();
        int leftmax=0,rightmax=0;
        j=n-1;
        while(i<j){
            if(height[i]<height[j]){
                leftmax=max(leftmax,height[i]);
                a+=leftmax-height[i];
                i++;
            }
            else{
                rightmax=max(rightmax,height[j]);
                a+=rightmax-height[j];
                j--;
            }
        }
        return a;
    }
};