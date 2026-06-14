class Solution {
public:
    bool checkGoodInteger(int n) {
        int sum=0,sqsum=0;
        while(n){
            sum+=n%10;
            sqsum+=(n%10) * (n%10);
            n/=10;
        }
        if(sqsum - sum >= 50)
        return 1;
        return 0;
    }
};