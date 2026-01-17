class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        string t="";
for(int i=0;i<words.size();i++)
    t.push_back(words[i][0]);
    if(t==s)
    return true;
    return false;
    }
};