class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        if(prices.size() == 1)
        return 1;
        long long i=0,c=0,ans=prices.size();
        for(i=0;i<prices.size()-1;i++){
            if(prices[i] - prices[i+1] == 1)
            c++;
            else{
                ans+=((c+1) * (c+2))/2-(c+1);
                c=0;
            }
        }
        if(i == prices.size()-1 && prices[i-1] - prices[i] == 1)
        ans+=((c+1) * (c+2))/2-(c+1);
        return ans;
    }
};