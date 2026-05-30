class Solution {
public:
    bool validDigit(int n, int x) {
        string str=to_string(n);char s=x+'0';
        cout<<str<<" "<<s;
        if(str[0] == s || str.find(s) == string::npos)
        return 0;
        return 1;
    }
};