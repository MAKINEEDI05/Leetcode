class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        int a=INT_MAX,i=0,n=tasks.size();
        for(i=0;i<n;i++){
            a=min(a,tasks[i][1]+tasks[i][0]);
        }
        return a;
    }
};