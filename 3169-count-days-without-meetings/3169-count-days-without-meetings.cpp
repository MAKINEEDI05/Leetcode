class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        int a=0,i=0,n=meetings.size();
        sort(meetings.begin(),meetings.end());
        a+=meetings[0][0]-1;
        for(i=1;i<n;i++){
            if(meetings[i-1][1]>=meetings[i][0]){
                if(meetings[i-1][1]>meetings[i][1]){
                    meetings[i][1]=meetings[i-1][1];
                }
            }
            else{
                a+=meetings[i][0]-meetings[i-1][1]-1;
            }
        }
        a+=days-meetings[n-1][1];
        return a;
    }
};