class Solution {
public:
    bool scoreBalance(string s) {
        int sum=0,lsum=0,rsum=0;
        for(int i=0;i<s.size();i++)
        sum+=(s[i]-'a' + 1);
        cout<<sum;
        for(int i=0;i<s.size();i++){
            lsum +=(s[i]-'a' + 1);
            rsum=sum-lsum;
            if(lsum == rsum)
            return 1;
        }
        return 0;
    }
};