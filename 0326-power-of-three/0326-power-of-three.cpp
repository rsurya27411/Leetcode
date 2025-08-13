class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=0) return false;
        if(n==1) return true;
        int i=0;
        while(pow(3,i)<=n)
            {
        if(pow(3,i)==n)
            return true;
            i++;
        }
        return false;
    }
};