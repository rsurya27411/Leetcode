class Solution {
public:
    int divide(int dividend, int divisor) {
    long long a=dividend,b=divisor;
    long long t=a,s=b;
    if(a==-2147483648&&b==-1)
    return 2147483647;
    if(b==1)
       return a;
    if(b==-1)
        return (-1*a);
    if(a<0&&b<0&&b==-1)
        return (-1*a);
    if(t<0)
    t=-1*t;
    if(s<0)
    s=-1*s;
    long long sum=0,c=0;
    while(sum<=t)
        {
        sum=sum+s;
        c++;
    }
    if(a<0&&b<0)
        return c-1;
        if(a<0)
        return 0-(c-1);
        if(b<0)
        return 0-(c-1);
        return c-1;
    }
};