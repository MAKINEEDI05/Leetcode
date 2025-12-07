class Solution {
public:
    int countOdds(int low, int high) {
        int a=0;
        if(low%2==0 && high%2==0){
            return (high-low)/2;
        }
        a=(high-low)/2+1;
        return a;
    }
};