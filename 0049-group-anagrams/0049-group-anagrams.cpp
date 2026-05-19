class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int a=0,i=0,n=strs.size();
        vector<vector<string>> AA;
        map<string,vector<string>> A;
        for(i=0;i<n;i++){
            string s=strs[i];
            sort(s.begin(),s.end());
            A[s].push_back(strs[i]);
        }
        for(auto i:A){
            AA.push_back(i.second);
        }
        return AA;
    }
};