class Solution {
public:
    int alternateDigitSum(int n) {
        int a=n,b=n,c=0,s=0;
        while(a)
            {
            int r1=a%10;
            c++;
            a=a/10;
        }
        int k=-1;
        while(b)
            {
            int r=b%10;
            if(c%2==0)
            s=s+(k*r);
            else
            s=s+(-k*r);
            b=b/10;
            k=-k;
        }
        return s;
    }
};