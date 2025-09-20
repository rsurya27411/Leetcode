class Solution {
public:
    int countPrimes(int n) {
vector<bool> prime(n,0);
for(long long i=2;i<n;i++)
    {
    if(prime[i]==0){
for(long long j=i*i;j<n;j+=i)
    prime[j]=1;
    }
    }
    long long c=0;
for(long long i=2;i<n;i++)
    if(prime[i]==0)c++;
    return c;
        }
};