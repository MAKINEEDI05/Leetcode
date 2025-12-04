class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int a=0,i=0,j=0,k=0,n=students.size(),m=sandwiches.size();
        int zero=0,one=0;
        for(i=0;i<n;i++){
            if(students[i]==0) zero++;
            else one++;
        }
        m=n;
        while(zero || one){
            for(i=0;i<n;i++){
                if(students[i]==-1){
                    continue;
                }
                if(sandwiches[j]==students[i]){
                    if(students[i]==0) zero--;
                    else one--;
                    students[i]=-1;
                    j++;
                    m--;
                    k=0;
                }
                else{
                    k++;
                    if(k==m){
                        return k;
                    }
                }
            }
        }
        return 0;
    }
};