class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int a=0,i=0,j=0,n=image.size(),m=image[0].size();
        for(i=0;i<n;i++){
            for(j=0;j<m/2;j++){
                image[i][j]=(image[i][j]==0)?1:0;
                image[i][m-j-1]=(image[i][m-j-1]==0)?1:0;
                swap(image[i][j],image[i][m-j-1]);
            }
            if(j==m-j-1){
                image[i][j]=(image[i][j]==0)?1:0;
                continue;
            }
        }
        return image;
    }
};