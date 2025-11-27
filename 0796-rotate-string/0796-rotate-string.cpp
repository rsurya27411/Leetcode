class Solution {
public:
    bool rotateString(string s, string goal) {
    string p=s+s;
    if(s.size()!=goal.size())
    return false;
    if(p.find(goal)!=string::npos)
    return true;
    return false;
    }
};