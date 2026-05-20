class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int a=0,i=0,n=position.size();
        vector<pair<int,int>> A;
        for(i=0;i<n;i++) A.push_back({position[i],speed[i]});
        sort(A.begin(),A.end(),greater<>());
        stack<double> B;
        for(i=0;i<n;i++){
            double time=(double)(target-A[i].first)/A[i].second;
            if(B.empty() || time>B.top()) B.push(time);
        }
        a=B.size();
        return a;
    }
};