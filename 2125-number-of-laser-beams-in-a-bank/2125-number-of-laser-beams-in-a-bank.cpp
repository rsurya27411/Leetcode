class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int n=bank.size(),m=bank[0].size();
        int r1=0,r2=0,ans=0;
        for(int i=0;i<m;i++)
        {
            //cout<<bank[0][i]<<endl;
            if((int)bank[0][i] == (int)'1')
            r1++;
        }
        for(int i=1;i<n;i++)
        {
            r2=0;
            for(int j=0;j<m;j++)
            {
                if((int)bank[i][j] == (int)'1')
                r2++;
            }
            ans+=r1*r2;
            if(r2!=0)
            r1=r2;
        }
        return ans;
    }
};