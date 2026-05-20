class Solution {
public:
    int countKthRoots(int l, int r, int k) {
        int a=ceil(pow(l, 1.0/k));
        int b=ceil(pow(r, 1.0/k));
        int c=0;
        cout<<a<<" "<<b;
        for(int i=a;i<=b;i++){
            int val=1;
            //cout<<i<<endl;
            for(int j=1;j<=k;j++)
            val*=i;
            if( val <= r && val>= l)
            c++;
        }
        return c;
    }
};