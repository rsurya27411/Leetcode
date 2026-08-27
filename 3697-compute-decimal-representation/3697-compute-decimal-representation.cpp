class Solution {
public:
    vector<int> decimalRepresentation(int n) {
        vector<int> ans;
        int cnt=0,N=n,c=0;
        while(N){
            c++;
            N/=10;
        }
        int i=0;
        while(i<c){
            if(n%10 == 0){
                n/=10;
                i++;
                continue;
            }
            ans.push_back(n%10 * pow(10,i));
            n/=10;
            i++;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};