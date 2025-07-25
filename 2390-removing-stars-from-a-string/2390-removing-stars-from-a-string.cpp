class Solution {
public:
    string removeStars(string s) {
        cout<<s.size();
        string ans="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i] != '*')
            ans.push_back(s[i]);
            else
            ans.pop_back();
        }
        return ans;
    }
};