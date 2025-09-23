class Solution {
public:
    int compareVersion(string version1, string version2) {
        int a=0,i=0,j=0,n=version1.size(),n1=version2.size();
        while(i<n && j<n1){
            int before=0,before1=0;
            while(i<n && version1[i]!='.'){
                before=before*10+(version1[i]-'0');   
                i++;
            }
            while(j<n1 && version2[j]!='.'){
                before1=before1*10+(version2[j]-'0');
                j++;
            }
            i++;
            j++;
            if(before>before1){
                return 1;
            }
            else if(before<before1){
                return -1;
            }
        }
        if(i!=n+1){
            while(i<n){
                if(version1[i]!='0' && version1[i]!='.'){
                    return 1;
                }
                i++;
            }
        }
        else if(j!=n1+1){
            while(j<n1){
                if(version2[j]!='0' && version2[j]!='.'){
                    return -1;
                }
                j++;
            }
        }
        return 0;
    }
};