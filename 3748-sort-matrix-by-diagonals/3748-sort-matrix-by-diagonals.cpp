class Solution {
public:
    void fun(vector<vector<int>>& grid,int ii,int jj,int n,int m){
        vector<int> A;
        int i=ii;
        int j=jj;
        while(i<n && i<m){
            A.push_back(grid[i][j]);
            i++;
            j++;
        }
        int k=0;
        sort(A.rbegin(),A.rend());
        i=ii;
        j=jj;
        while(i<n && i<m){
            grid[i][j]=A[k];
            i++;
            j++;
            k++;
        }
        return;
    }
    void fun2(vector<vector<int>>& grid,int ii,int jj,int n,int m){
        vector<int> A,B;
        int i=ii;
        int j=jj;
        while(i<n && i<m){
            A.push_back(grid[i][j]);
            B.push_back(grid[j][i]);
            i++;
            j++;
        }
        int k=0;
        sort(A.rbegin(),A.rend());
        sort(B.begin(),B.end());
        i=ii;
        j=jj;
        while(i<n && i<m){
            grid[i][j]=A[k];
            grid[j][i]=B[k];
            i++;
            j++;
            k++;
        }
        return;
    }
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        int a=0,n=grid.size(),m=grid.size(),i=0,j=0;
        //since corner place does't change
        // 0 , n-1  n-1 , 0
        //start from 0 , 0 increment 0+1 j+1 while condition push vector
        fun(grid,0,0,n,m);
        for(i=1;i<n-1;i++){
            fun2(grid,i,0,n,m);
        }
        return grid;
    }
};