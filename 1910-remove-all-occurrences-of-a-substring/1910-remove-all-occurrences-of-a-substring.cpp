class Solution {
public:
    string removeOccurrences(string s, string part) {
        while(s.find(part) != string::npos){
            int pos=s.find(part);
            s=s.substr(0,pos) + s.substr(pos + part.size());
        }
        return s;
    }
};