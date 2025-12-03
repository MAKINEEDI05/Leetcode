class Solution {
public:
    vector<int> fun(int i,int n,string equation){
        int x=0,sum=0,sign=0,value=0,check=0;
        for(;i<n;i++){
            if(isdigit(equation[i])){
                int temp=equation[i]-'0';
                value=value*10+temp;
                check=1;
            }
            else if(equation[i]=='x'){
                if(value==0 && check==0) value=1;
                if(sign==1) value=value*-1;
                x+=value;
                value=0;
                check=0;
            }
            if(equation[i]=='-' || equation[i]=='+'){
                if(sign==0) sum+=value;
                else sum-=value;
                value=0;
                sign=(equation[i]=='+')?0:1;
                check=0;
            }
        }
        if(sign)sum-=value;
        else sum+=value;
        return {x,sum};
    }
    string solveEquation(string equation) {
        int a=0,i=0,n=equation.size();
        while(equation[i]!='='){
            i++;
        }
        vector<int> A,B;
        A=fun(0,i,equation);
        B=fun(i+1,n,equation);
        string C;
        if(A[0]-B[0]){
            a=(B[1]-A[1])/(A[0]-B[0]);
            C="x="+to_string(a);
        }
        else if(A[0]==B[0] && A[1]==B[1]){
            C="Infinite solutions";
        }
        else if(A[0]==B[0] && (A[1] || B[1])){
            C="No solution";
        }
        return C;
    }
};