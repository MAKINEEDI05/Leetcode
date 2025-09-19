class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int a=0,i=0,j=0,n=numRows;
        vector<vector<int>> A;
        if(n==1){
            return {{1}};
        }
        if(n==2){
            return {{1},{1,1}};
        }
        A={{1},{1,1}};
        for(i=3;i<=n;i++){
            vector<int> B;
            B.push_back(1);
            for(j=1;j<i-1;j++){
                B.push_back(A[i-2][j]+A[i-2][j-1]);
            }
            B.push_back(1);
            A.push_back(B);
        }
        return A;
    }
};