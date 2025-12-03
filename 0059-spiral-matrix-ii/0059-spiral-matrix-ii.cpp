class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int a=0,i=0,j=0,k=0,l=0;
        vector<vector<int>> A(n,vector<int> (n,0));
        int value=1;
        i=0; j=n-1; k=n-1; l=0;
        while(i<=k && l<=j){
            int temp=0;
            for(temp=l;temp<=j;temp++){
                A[i][temp]=value++;
            }
            i++;
            for(temp=i;temp<=k;temp++){
                A[temp][j]=value++;
            }
            j--;
            for(temp=j;temp>=l;temp--){
                A[k][temp]=value++;
            }
            k--;
            for(temp=k;temp>=i;temp--){
                A[temp][l]=value++;
            }
            l++;
        }
        return A;
    }
};