class Solution {
public:
    bool checkRecord(string s) {
        int abse=0,late=0;
        for(int i=0;i<s.size();i++)
        {
            if(abse > 2 || s[i]=='L' && s[i+1]=='L' && s[i+2]=='L')
            return false;
            if(s[i]=='A')
            abse++;
        }
        cout<<abse;
        if(abse >= 2)
        return 0;
        return 1;
    }
};