class Solution {
public:
    string removeOccurrences(string s, string part) {
        while(s.find(part) != string::npos){
            s=s.substr(0,s.find(part)) + s.substr(s.find(part) + part.size());
        }
        return s;
    }
};