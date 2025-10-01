class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ans=numBottles;
        while(numBottles >= numExchange){
            ans+=(numBottles/numExchange);
            numBottles=numBottles/numExchange + numBottles%numExchange;
            //cout<<ans<<numBottles<<endl;
        }
        
        if(numBottles > numExchange)
        return ans+1;
        return ans;
    }
};