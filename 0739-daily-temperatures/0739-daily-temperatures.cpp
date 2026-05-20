class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int a=0,i=0,n=temperatures.size();
        vector<int> A(n,0);
        stack<int> B;
        for(i=0;i<n;i++){
            while(!B.empty() && temperatures[B.top()]<temperatures[i]){
                a=B.top();
                B.pop();
                A[a]=i-a;
            }
            B.push(i);
        }
        return A;
    }
};