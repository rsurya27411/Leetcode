class Solution {
public:
    int minimumChairs(string s) {
    int c=1,maxi=0;
 for(int i=0;i<s.size()-1;i++)
     {
 if(s[i]=='E'&&s[i+1]=='E')
    c++;
else if(s[i]=='L'&&s[i+1]=='L')
    c++;
    else
    {
    maxi=max(maxi,c);
    c=1;
    }
 }
    return max(c,maxi);
    }
};