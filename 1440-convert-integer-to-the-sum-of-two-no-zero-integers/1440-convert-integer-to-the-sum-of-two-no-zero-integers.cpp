class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        int a=1,b=n-1;
        while(a<=n){
            if(a%10!=0 && b%10!=0){
                string A=to_string(a),B=to_string(b);
                if(find(A.begin(),A.end(),'0')==A.end() && find(B.begin(),B.end(),'0')==B.end()){
                    return {a,b};
                }
            }
            a++;
            b--;
        }
        return {a,b};
    }
};