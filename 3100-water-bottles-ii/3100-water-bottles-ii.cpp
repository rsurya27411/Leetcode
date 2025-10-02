class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int drinkable=0,ans=numBottles;
        while(numBottles+drinkable >= numExchange){
            drinkable++;
            numBottles-=numExchange;
            numExchange++;
        }
        //cout<<numBottles<<endl<<numExchange;
        return ans+drinkable;
    }
};