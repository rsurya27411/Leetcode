class Solution {
public:
    bool isHappy(int n) {
        if(n==1||n==7) return true;
        if(n<9) return false;
        int s=0;
            while(n)
                {
                int r=n%10;
                s=s+pow(r,2);
                n=n/10;
                }
         if(s==1)
           return true;
        else
            return isHappy(s);
        return false;
    }
};