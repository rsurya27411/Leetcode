class Solution {
public:
    bool isFascinating(int n) {
        int n1=2*n;
        int n2=3*n;
        string str=to_string(n)+to_string(n1)+to_string(n2);
        //cout<<str;
        vector<char> ans(10,0);
        for(int i=0;i<str.size();i++){
            //cout<<str[i]<<endl;
            ans[str[i]-'0']++;
        }
        for(int i=1;i<10;i++){
            cout<<ans[i]<<endl;
            if(ans[i] == 0 || ans[i] != 1)
            return 0;
        }
        return 1;
    }
};