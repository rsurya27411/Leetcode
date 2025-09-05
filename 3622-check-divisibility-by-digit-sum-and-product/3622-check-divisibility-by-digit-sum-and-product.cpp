class Solution {
public:
    bool checkDivisibility(int n) {
        int n1=n,n2=n;
        int sum=0,pro=1;
        while(n1)
            {
                if(n1%10 != 0)
                sum+=n1%10;
                n1/=10;
            }
        while(n2)
            {
                if(n2%10 ==0)
                {
                    pro=0;
                    break;
                }
                pro*=(n2%10);
                n2/=10;
            }
        cout<<sum;
        return n%(sum+pro) == 0 ? true:false;
    }
};