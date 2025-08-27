class Solution {
public:
    char findKthBit(int n, int k) {
        string s="0";
        for(int i=1;i<=n;i++){
            string str=s;
            for(int j=0;j<str.size();j++){
                if(str[j] == '0')
                str[j]='1';
                else if(str[j] == '1')
                str[j]='0';
            }
            reverse(str.begin(),str.end());
            s=s+"1"+str;
            //cout<<s<<endl;
        }
        return s[k-1];
    }
};