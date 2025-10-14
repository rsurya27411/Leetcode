class Solution {
public:
    int mySqrt(int x) {
    long long i;
    for(i=1;i*i<=x;i++)
    if((long long)i*i==x)return i;
    return i-1;
    }
};