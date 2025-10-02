class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int a=numBottles;
        while(numBottles>=numExchange){
            numBottles=numBottles-numExchange+1;
            a++;
            numExchange++;
        }
        return a;
    }
};