class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0)return 1;
        int ans=0,i=0;
        while(n)
        {
            if((n&1)==0)
            ans+=pow(2,i);
            i++;
            n=n>>1;
        }
        return ans;
    }
};