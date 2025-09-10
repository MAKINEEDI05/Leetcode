class Solution {
public:
    void fun(vector<int>& A){
        int a=-1,i=0,n=A.size();
        for(i=n-2;i>=0;i--){
            if(A[i]<A[i+1]){
                a=i;
                break;
            }
        }
        if(a==-1){
            reverse(A.begin(),A.end());
            return;
        }
        for(i=n-1;i>=a;i--){
            if(A[a]<A[i]){
                swap(A[i],A[a]);
                break;
            }
        }
        reverse(A.begin()+a+1,A.end());
    }
    int fun1(int n){
        int a=1;
        while(n>1){
            a*=n;
            n--;
        }
        return a;
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int a=0,i=0,n=nums.size();
        vector<vector<int>> A;
        a=fun1(n);
        while(a--){
            A.push_back(nums);
            fun(nums);
        }
        return A;
    }
};