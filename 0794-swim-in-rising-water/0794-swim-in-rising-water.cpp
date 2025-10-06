class Solution {
public:
    int fun(vector<vector<int>>& grid,int size){
        int a=0,n=grid.size();
        vector<vector<int>> vis(n,vector<int>(n,-1));
        queue<vector<int>> A;
        vector<vector<int>> ways={{0,1},{1,0},{0,-1},{-1,0}};
        if(grid[0][0]<=size){
            A.push({0,0});
        }
        while(!A.empty()){
            vector<int> val=A.front();
            A.pop();
            if(val[0]==n-1 && val[1]==n-1){
                return 1;
            }
            for(int i=0;i<4;i++){
                int ii=ways[i][0]+val[0],jj=ways[i][1]+val[1];
                if(ii>=0 && ii<n && jj>=0 && jj<n && vis[ii][jj]==-1 && grid[ii][jj]<=size){
                    A.push({ii,jj});
                    vis[ii][jj]=0;
                }
            }
        }
        return 0;
    }
    int swimInWater(vector<vector<int>>& grid) {
            int a=0,b=grid.size(),l=0,r=b*b;
            while(l<=r){
                int n=(l+r)/2;
                if(l==r){
                    return l;
                }
                int aa=fun(grid,n);
                if(aa==1){
                    r=n;
                    a=n;
                }
                else{
                    l=n+1;
                }
            }
            return a;
    }
};