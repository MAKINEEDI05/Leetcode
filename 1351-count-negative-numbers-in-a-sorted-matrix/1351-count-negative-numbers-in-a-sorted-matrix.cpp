class Solution {
public:
    int countNegatives(vector<vector<int>>& A) {
        int a=0,i=0,j=0;
        for(i=0;i<A.size();i++){
            for(j=0;j<A[0].size();j++){
                if(A[i][j]<0){
                    a++;
                }
            }
        }
        return a;
    }
};