class Solution {
public:
    int minBitFlips(int start, int goal) {
        int ans=start^goal,c=0;
        for(int i=0;i<31;i++)
        {
            if(ans%2==1)
            c++;
            ans/=2;
        }
        return c;
    }
};