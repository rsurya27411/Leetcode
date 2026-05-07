class Solution {
public:
    int secondHighest(string s) {
        int maxi1=-1,maxi2=-1;
        for(int i=0;i<s.size();i++)
        {
            cout<<maxi1<<maxi2<<endl;
            if((int)s[i]>=48 && (int)s[i]<=57 && s[i]-'0' > maxi1)
            {
                maxi2=maxi1;
                maxi1=s[i]-'0';
            }
            else if((int)s[i]>=48 && (int)s[i]<=57 && s[i]-'0' < maxi1 && s[i]-'0' > maxi2)
            maxi2=s[i]-'0';
        }
        return maxi2;
    }
};