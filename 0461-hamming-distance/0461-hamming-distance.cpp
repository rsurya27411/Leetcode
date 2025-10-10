class Solution {
public:
    int hammingDistance(int x, int y) {
        int c=0,n=x^y;
        while(n)
        {
            if((n&1)==1)c++;
            n=n>>1;
        }
        return c;
    }
};