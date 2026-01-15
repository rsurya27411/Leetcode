class Solution {
public:
    bool isIsomorphic(string s, string t) {
    vector<int> indexs(256,0);
    vector<int> indext(256,0);
for(int i=0;i<s.length();i++)
    {
if(indexs[s[i]]!=indext[t[i]])
   return false;
    else{
        indexs[s[i]]=i+1;
        indext[t[i]]=i+1;
    }
}
       return true;
    }
};