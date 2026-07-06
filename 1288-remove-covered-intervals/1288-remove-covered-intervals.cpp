class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        int a=intervals.size(),i=0,n=intervals.size();
        sort(intervals.begin(),intervals.end(),[](vector<int>&A,vector<int>&B){
            return A[0]<B[0];
        });
        vector<int> last=intervals[0];
        for(i=1;i<n;i++){
            if((intervals[i][0]<=last[0] && intervals[i][1]>=last[1]) ||
               (intervals[i][0]>=last[0] && intervals[i][1]<=last[1])){
                a--;
                last[0]=min(last[0],intervals[i][0]);
                last[1]=max(last[1],intervals[i][1]);
                continue;
            }
            last=intervals[i];
        }
        return a;
    }
};