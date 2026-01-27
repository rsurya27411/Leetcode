class Solution {
public:
    int vowelConsonantScore(string s) {
        string vowels="aeiou";
        string cons="bcdfghjklmnpqrstvwxyz";
        int v=0,c=0;
        for(int i=0;i<s.size();i++){
            if(vowels.find(s[i]) != string::npos)
            v++;
            else if(cons.find(s[i]) != string::npos)
            c++;
            //cout<<v<<c<<endl;
        }
        if(c>0)
        return floor(v/c);
        return 0;
    }
};