class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int K=0,n=code.size();
        vector<int> ans(n,0);
        if(k>0){
            K=k;
            for(int i=0;i<n;i++){
                int lsum=0;
                int j=i+1,c=1;
                if(i==n-1)
                j=0;
                while(c<=K && j<=n-1){
                    lsum+=code[j];
                    j++;
                    if(j==n)
                    j=0;
                    c++;
                }
                ans[i]=(lsum);
            }
        }
        if(k<0){
            K=-(k);
            for(int i=n-1;i>=0;i--){
                int rsum=0;
                int j=i-1,c=1;
                if(i==0)
                j=n-1;
                while(c<=K && j>=0){
                    rsum+=code[j];
                    j--;
                    if(j==-1)
                    j=n-1;
                    c++;
                }
                ans[i]=(rsum);
            }
        }
        return ans;
    }
};