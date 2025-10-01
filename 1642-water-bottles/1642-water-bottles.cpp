class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int a=numBottles;
        while(numBottles>=numExchange){
            numBottles=numBottles-numExchange+1;
            a++;
        }
        return a;
    }
};