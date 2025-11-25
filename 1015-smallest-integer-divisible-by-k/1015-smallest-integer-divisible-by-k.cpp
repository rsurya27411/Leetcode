class Solution {
public:
    int smallestRepunitDivByK(int k) {
        if(k%2 == 0 || k%5 == 0)return -1;
        int c=1,n=1;
        while(n % k != 0){
            n=(n%k) * 10 +1;
            c++;
        }
        return c;
    }
};