class Solution {
public:
    stack<int> A;
    void add(){
        int a=0,b=0;
        a=A.top();A.pop();b=A.top();A.pop();
        A.push(a+b);
    }
    void sub(){
        int a=0,b=0;
        a=A.top();A.pop();b=A.top();A.pop();
        A.push(b-a);
    }
    void mul(){
        int a=0,b=0;
        a=A.top();A.pop();b=A.top();A.pop();
        A.push(a*b);
    }
    void div(){
        int a=0,b=0;
        a=A.top();A.pop();b=A.top();A.pop();
        A.push(b/a);
    }
    int evalRPN(vector<string>& tokens) {
        int a=0,i=0,n=tokens.size();
        for(i=0;i<n;i++){
            if(tokens[i]!="+" && tokens[i]!="-" && tokens[i]!="*" && tokens[i]!="/"){
                A.push(stoi(tokens[i]));
            }
            else{
                if(tokens[i]=="+") add();
                if(tokens[i]=="-") sub();
                if(tokens[i]=="*") mul();
                if(tokens[i]=="/") div();
            }
        }
        a=A.top();
        return a;
    }
};