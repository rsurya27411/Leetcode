class Solution {
public:
    bool isPalindrome(int x) {
        long int r,s=0;
        long int k=x;
        while(x>0)
            {
            r=x%10;
            s=(s*10)+r;
            x=x/10;
        }
       if(s==k)
           return true;
        else
            return false;
    }
};