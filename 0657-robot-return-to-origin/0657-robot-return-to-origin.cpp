class Solution {
public:
    bool judgeCircle(string moves) {
        int a=0,b=0,i=0,n=moves.size();
        for(i=0;i<n;i++){
            if(moves[i]=='U'){
                a++;
            }
            else if(moves[i]=='D'){
                a--;
            }
            else if(moves[i]=='R'){
                b++;
            }
            else{
                b--;
            }
        }
        if(a==0 && b==0){
            return 1;
        }
        return 0;
    }
};