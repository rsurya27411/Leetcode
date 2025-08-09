class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<0)
        return false;
        int a=sqrt(n);
        if(n==1||n==8) 
        return true;
        for(int i=a;i>=0;i--){
        if(pow(2,i)==n)
            return true;}
        return false;
    }
};