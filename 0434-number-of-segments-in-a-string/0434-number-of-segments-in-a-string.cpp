class Solution {
public:
    int countSegments(string s) {
        s+=" ";
       vector<string> ans;
       string word="";
       for(int i=0;i<s.size();i++)
       {
        if(s[i]==' ' && word != ""){
            ans.push_back(word);
            word="";
        }
        else if(s[i] != ' '){
            word+=s[i];
        }
       }
       return ans.size();
    }
};