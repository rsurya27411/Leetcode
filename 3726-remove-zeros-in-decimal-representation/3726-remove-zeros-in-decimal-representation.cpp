class Solution {
public:
    long long removeZeros(long long n) {
        string str=to_string(n),newstr="";
        for(int i=0;i<str.size();i++)
        if(str[i] != '0')
        newstr+=str[i];
        cout<<newstr;
        long long N = stoll(newstr);
        return N;
    }
};