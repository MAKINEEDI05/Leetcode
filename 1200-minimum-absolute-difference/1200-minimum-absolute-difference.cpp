class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int a=INT_MAX,i=0;
        sort(arr.begin(),arr.end());
        map<int,vector<vector<int>>> A;
        for(i=0;i<arr.size()-1;i++){
            int val=arr[i+1]-arr[i];
            A[val].push_back({arr[i],arr[i+1]});
            a=min(a,val);
        }
        return A[a];
    }
};