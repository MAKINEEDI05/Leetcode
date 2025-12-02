class Solution {
public:
    int calPoints(vector<string>& operations) {
        int a=0,i=0,j=0,n=operations.size();
        vector<int> A;
        for(i=0;i<n;i++){
            if(operations[i]!="+" && operations[i]!="C" && operations[i]!="D"){
                A.push_back(stoi(operations[i]));
                a+=stoi(operations[i]);
                j++;
            }
            else if(operations[i]=="+"){
                A.push_back(A[j-2]+A[j-1]);
                a+=A[j];
                j++;
            }
            else if(operations[i]=="C"){
                a-=A[j-1];
                A.pop_back();
                j--;
            }
            else{
                A.push_back(A[j-1]*2);
                a+=A[j];
                j++;
            }
        }
        return a;
    }
};