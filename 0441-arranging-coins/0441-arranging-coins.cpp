class Solution {
public:
    int arrangeCoins(int n) {
    int k=1,N=n;
    while(N>0)
    {
        N-=k;
        k++;   
    }
    if(N==0)
    return k-1;
    return k-2;
    }
};