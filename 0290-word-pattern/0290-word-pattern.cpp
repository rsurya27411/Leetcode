class Solution {
public:
    bool wordPattern(string pattern, string s) {
        s+=" ";
        map<char,string> mp1;
        map<string,char> mp2;
        int j=0;
        for(int i=0;i<pattern.size();i++){
            if(j >= s.size()) return false;
            string word="";
            for(int k=j;k<s.size();k++){
                if(s[k] == ' '){
                    j=k+1;
                    break;
                }
                word+=s[k];
            }
            if(mp1.find(pattern[i]) != mp1.end()){
                if(mp1[pattern[i]] != word)
                return 0;
            }
            else
            mp1[pattern[i]]=word;

            if(mp2.find(word) != mp2.end()){
                if(mp2[word] != pattern[i])
                return 0;
            }
            else
            mp2[word]=pattern[i];
        }
        return j >= s.size();
    }
};