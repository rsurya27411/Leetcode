class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
sort(happiness.begin(),happiness.end());
long long n=happiness.size();
    long long s=0,l=n-1;
for(long long i=1;i<=k;i++)
        {
        if(happiness[l]>0)
        s=s+happiness[l--];
        long long a=n-2;
for(long long j=a;j>=0;j--)
            {
           happiness[j]--;
        }
       n--;
    }
        return s;
    }
};