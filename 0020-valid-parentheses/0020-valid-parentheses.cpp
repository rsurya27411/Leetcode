class Solution {
public:
    bool isValid(string s ) {
        int p = 0;
    int sum= 0;
    int c = 0;
    vector<char>ans;
    for (int i=0;i<s.size();i++) {
        if (s[i]== '(') {
            p++;            ans.push_back(s[i]);
        } else if (s[i] == ')') {
            p--;
            if (p < 0 || ans.empty() || ans.back() != '(') {
                return false;
            }
            ans.pop_back();
        } else if (s[i]== '[') {
            sum++;           ans.push_back(s[i]);
        } else if (s[i] == ']') {
            sum--;
            if (sum< 0 || ans.empty() || ans.back() != '[') {
                return false;
            }
            ans.pop_back();

        } else if (s[i]== '{') {
            c++;           ans.push_back(s[i]);
        } else if (s[i]== '}') {
            c--;
            if (c< 0 || ans.empty() || ans.back() != '{') {
                return false;
            }
            ans.pop_back();
        }
    }
    if(p == 0 && sum== 0 && c == 0)

        return true ;

        return false;

}    
};