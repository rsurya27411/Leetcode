class Solution {
public:
    long long sumAndMultiply(int n) {
        string s=to_string(n);
        string x="";
        long long sum=0;
        for(int i=0;i<s.size();i++)
        if(s[i] != '0'){
            x+=s[i];
            sum+=s[i]-'0';
        }
        cout<<sum;
        int N=stol(x);
        return (N*sum);
    }
};