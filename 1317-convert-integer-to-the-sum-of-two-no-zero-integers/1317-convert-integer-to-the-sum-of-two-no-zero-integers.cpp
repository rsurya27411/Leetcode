class Solution {
public:
    bool isContain(int n){
        if(n==0)return false;
        while(n>0){
            if(n % 10 == 0)
            return false;
            n/=10;
        }
        return true;
    }
    vector<int> getNoZeroIntegers(int n) {
        int N=n,c=0;
        while(N){
            if((isContain(N)) && (isContain(c)))
                break;
            if(isContain(N) == false || isContain(c) == false)
            c++;
            N-=1;
        }
        return{c,N};
    }
};