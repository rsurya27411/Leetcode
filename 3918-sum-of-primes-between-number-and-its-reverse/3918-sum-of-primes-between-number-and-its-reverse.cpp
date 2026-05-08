class Solution {
public:
    int sumOfPrimesInRange(int n) {
        int N=n;
        string num=to_string(n);
        reverse(num.begin(),num.end());
        int Num=stoi(num);
        int sum=0;
        vector<int> primes(max(N,Num)+1,1);
        primes[0]=0;primes[1]=0;
        for(int i=2;i*i<=max(N,Num);i++){
            if(primes[i]){
                for(int j=i*i;j<=max(N,Num);j+=i){
                primes[j]=0;
                }
            }
        }
        for(int i=min(N,Num);i<=max(N,Num);i++){
            cout<<i;
            if(primes[i] == 1)
            sum+=i;
        }
        return sum;
    }
};