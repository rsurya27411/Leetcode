class Solution {
public:
    string makeFancyString(string s) {
        string str="";int c=1;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]!=s[i+1] && c>1)
            {
                str+=s[i];
                str+=s[i];
                c=1;
                continue;
            }
            if(s[i]!=s[i+1])
            {
                str+=s[i];
                c=1;
            }
            else
            {
                c++;
            }
        }
        if(c==1)
        str+=s[s.size()-1];
        if(c>1)
        {
            str+=s[s.size()-1];
            str+=s[s.size()-1]; 
        }
        return str;
    }
};