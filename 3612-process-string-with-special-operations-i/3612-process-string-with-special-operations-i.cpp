class Solution {
public:
    string processStr(string s) {
        string ans="";
        for(int i=0;i<s.size();i++){
            if(s[i] == '*'){
                if(ans.size() > 0)
                ans.pop_back();
            }
            if(s[i] == '#'){
                ans+=ans;
            }
            if(s[i] == '%'){
                reverse(ans.begin(),ans.end());
            }
            if((int)s[i] >= 97 && (int)s[i] <= 122)
            ans.push_back(s[i]);
            cout<<ans<<endl;
        }
        return ans;
    }
};