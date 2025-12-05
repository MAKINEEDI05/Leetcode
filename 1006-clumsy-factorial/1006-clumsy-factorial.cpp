class Solution {
public:
    int clumsy(int n) {
        int a=n,i=0,j=0;
        queue<int> A;
        queue<char> B;
        string C="*/+-";
        for(i=n-1;i>=1;i--){
            j=j%4;
            if(C[j]=='*'){
                a*=i;
            }
            else if(C[j]=='/'){
                a/=i;
            }
            else if(C[j]=='+'){
                A.push(a);
                B.push(C[j]);
                A.push(i);
            }
            else{
                B.push(C[j]);
                a=i;
            }
            j++;
        }
        A.push(a);
        a=A.front();
        A.pop();
        while(!B.empty()){
            int val=A.front();
            A.pop();
            if(B.front()=='+'){
                a+=val;
            }
            else{
                a-=val;
            }
            B.pop();
        }
        return a;
    }
};