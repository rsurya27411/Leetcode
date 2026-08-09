class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        sort(prices.begin(),prices.end());
        reverse(prices.begin(),prices.end());
        sort(discounts.begin(),discounts.end());
        reverse(discounts.begin(),discounts.end());
        int n=prices.size(),m=discounts.size(),i=0;
        double sum=0;
        for(i=0;i<min(m,n);i++){
            sum+=(double)(prices[i] * (100 - discounts[i])) / (double)100;
        }
        if(n>m){
            for(int j=i;j<n;j++)
            sum+=prices[j];
        }
        return sum;
    }
};