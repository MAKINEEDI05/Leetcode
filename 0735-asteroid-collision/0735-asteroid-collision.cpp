class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int a=0,i=0,j=0,n=asteroids.size();
        i=0;
        j=1;
        while(i<j && j<asteroids.size()){
            if(i<=0){
                i=0;
                j=i+1;
            }
            if(j>=asteroids.size()) break;
            if((asteroids[i]>0 && asteroids[j]>0) || (asteroids[i]<0 && asteroids[j]<0)){
                i++;
                j++;
            }else if(asteroids[i]>0 && asteroids[j]<0){
                if(abs(asteroids[i])>abs(asteroids[j])){
                    asteroids.erase(asteroids.begin()+j);
                }
                else if(abs(asteroids[i])<abs(asteroids[j])){
                    asteroids.erase(asteroids.begin()+i);
                    i--;
                    j--;
                }
                else{
                    asteroids.erase(asteroids.begin()+i);
                    asteroids.erase(asteroids.begin()+i);
                    i--;
                    j=i+1;
                }
            }
            else{
                i++;
                j++;
            }
        }
        return asteroids;
    }
};