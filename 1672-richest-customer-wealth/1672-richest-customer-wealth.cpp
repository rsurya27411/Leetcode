class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int n=accounts.size();
        int i,j,s=0,c=0;
        vector<int> sum;
        for(i=0;i<n;i++)
            {
            s=0;
            for(j=0;j<accounts[i].size();j++)
                {
                s=s+accounts[i][j];
                sum.push_back(s);
                c++;
            }
        }
        sort(sum.begin(),sum.end());
        return sum[c-1];
    }
};