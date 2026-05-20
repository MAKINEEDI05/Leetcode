class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int a=0,b=0,i=0,n=intervals.size();
        sort(intervals.begin(),intervals.end(),[](auto& a,auto& b){
            return a[1]<b[1];
        });
        b=intervals[0][1];
        for(auto& i:intervals){
            if(i[0]>=b){
                a++;
                b=i[1];
            }
        }
        return n-a-1;
    }
};