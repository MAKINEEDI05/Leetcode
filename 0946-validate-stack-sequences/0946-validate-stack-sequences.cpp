class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int a=0,i=0,j=0,n=pushed.size();
        stack<int> A;
        for(i=0;i<n;){
            if(pushed[i]==popped[j]){
                j++;
                i++;
            }
            else if(!A.empty() && A.top()==popped[j]){
                A.pop();
                j++;
            }
            else{
                A.push(pushed[i]);
                i++;
            }
        }
        while(!A.empty()){
            if(A.top()==popped[j]){
                A.pop();
                j++;
            }
            else{
                return 0;
            }
        }
        return 1;
    }
};