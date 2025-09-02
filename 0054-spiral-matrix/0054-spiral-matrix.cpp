class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int a=0,i=0,j=0,k=0,l=0,n=matrix.size(),m=matrix[0].size();
        j=m-1,k=n-1;
        vector<int> A;
        while(i<=k && l<=j){
            int it=0;
            for(it=l;it<=j;it++){
                A.push_back(matrix[i][it]);
            }
            i++;
            for(it=i;it<=k;it++){
                A.push_back(matrix[it][j]);
            }
            j--;
            if(i<=k){
            for(it=j;it>=l;it--){
                A.push_back(matrix[k][it]);
            }
            k--;
            }
            if(l<=j){
            for(it=k;it>=i;it--){
                A.push_back(matrix[it][l]);
            }
            l++;
            }
        }
        return A;
    }
};