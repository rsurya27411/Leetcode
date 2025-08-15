class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<0) return false;
        if(n==1) return true;
        int a=sqrt(n);
        for(int i=a;i>=1;i--)
           {
            if(pow(4,i)==n)
                return true;
        }
        return false;
    }
};