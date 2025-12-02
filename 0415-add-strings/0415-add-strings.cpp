class Solution {
public:
    string addStrings(string num1, string num2) {
        int a=0,i=0,j=0,n=num1.size(),m=num2.size();
        string A;
        i=n-1;
        j=m-1;
        for(;i>=0 || j>=0 || a!=0;i--,j--){
            int val1=0,val2=0;
            if(i>=0){
                val1=num1[i]-'0';
            }
            if(j>=0){
                val2=num2[j]-'0';
            }
            int curr=val1+val2+a;
            char sum=curr%10 + '0';
            a=curr/10;
            A=sum+A;
        }
        if(a!=0){
            char aa=a+'0';
            A=aa+A;
        }
        return A;
    }
};