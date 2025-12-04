class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        int a=0,i=0,n=num_people;
        vector<int> A(n,0);
        while(candies){
            for(i=1;i<=n;i++){
                if(candies-(a+i)<0){
                    A[i-1]+=candies;
                    candies=0;
                }
                else{
                    A[i-1]+=a+i;
                    candies-=a+i;
                }
            }
            a+=n;
        }
        return A;
    }
};