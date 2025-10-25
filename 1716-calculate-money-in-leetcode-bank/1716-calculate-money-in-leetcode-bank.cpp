class Solution {
public:
    int totalMoney(int n) {
        int k=1,a=0,i,s=0;
        for(i=1;i<=n;i++)
            {
            if((i-1)%7==0){
                a++;
            k=a;}
            s=s+k;
            k++;
        }
        return s;
    }
};