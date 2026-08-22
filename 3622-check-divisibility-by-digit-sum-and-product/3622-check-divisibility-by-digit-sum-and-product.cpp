class Solution {
public:
    bool checkDivisibility(int n) {
        int n1=n;
        int sum=0,pro=1;
        while(n1)
            {
                pro*=n1%10;
                sum+=n1%10;
                n1/=10;
            }
            cout<<sum<<" "<<pro;
        return n%(sum+pro) == 0 ? true:false;
    }
};