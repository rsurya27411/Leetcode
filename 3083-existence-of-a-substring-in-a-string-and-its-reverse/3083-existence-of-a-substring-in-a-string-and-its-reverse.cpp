class Solution {
public:
    bool isSubstringPresent(string s) {
string t;int n=s.size();
for(int i=n-1;i>=0;i--)
    t.push_back(s[i]);
    //cout<<t;
for(int i=0;i<s.size()-1;i++)
{
string a=s.substr(i,2);
 cout<<a<<endl;
if((s.find(a)!=string::npos)&&(t.find(a)!=string::npos)&&a.size()==2){
    cout<<a<<endl;
    return true;}
}
       return false;
    }
};