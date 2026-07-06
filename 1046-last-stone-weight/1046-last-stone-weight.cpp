class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int,vector<int>> A;
        int a=0,i=0,n=stones.size();
        for(i=0;i<n;i++) A.push(stones[i]);
        while(A.size()>1){
            int stone1=A.top();
            A.pop();
            int stone2=A.top();
            A.pop();
            if(stone1==stone2){
                continue;
            }
            A.push(stone1-stone2);
        }
        if(A.size()==0) return 0;
        return A.top();
    }
};