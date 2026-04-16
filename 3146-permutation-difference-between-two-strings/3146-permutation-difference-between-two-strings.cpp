class Solution {
public:
int getindex(string s,char c)
    {
 for(int i=0;i<s.size();i++)
     if(s[i]==c)
     return i;
     return 0;
}
    int findPermutationDifference(string s, string t) {
     int s1=0;
 for(int i=0;i<s.size();i++)
     {
 int a=getindex(s,s[i]);
 int b=getindex(t,s[i]);
 int c=abs(a-b);
     s1=s1+c;
 }
     return s1;
    }
};