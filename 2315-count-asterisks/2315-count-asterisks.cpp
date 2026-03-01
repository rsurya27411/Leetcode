class Solution {
public:
    int countAsterisks(string s) {
        int c=0,j=0;
        for(int i=0;i<s.size();i++)
        {
            cout<<s[i]<<endl;
            if(s[i]=='*')
            c++;
            if(s[i]=='|')
            {
                j=i+1;
                while(s[j]!='|')
                {
                    j++;
                }
                i=j;
            }
        }
        return c;
    }
};