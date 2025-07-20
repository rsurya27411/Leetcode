class Solution {
public:
    string findValidPair(string s) {
    vector<int> freq(11,0);
    string str="";
    for(int i=0;i<s.size();i++)
    freq[s[i]-'0']++;
    for(int i=0;i<s.size()-1;i++)
    {
        if((s[i] != s[i+1]) && freq[s[i]-'0']==(s[i]-'0') && freq[s[i+1]-'0']==(s[i+1]-'0'))
        {
            cout<<i;
            str=to_string(s[i]-'0')+to_string(s[i+1]-'0');
            return str;
        }
        // if(freq[s[i]-'0']==(s[i]-'0') && freq[s[i]-'0' - 1]==(s[i]-'0' - 1))
        // {
        //     str=to_string(s[i]-'0')+to_string(s[i]-'0' - 1);
        //     return str;
        // }
    }
    return "";
    }
};