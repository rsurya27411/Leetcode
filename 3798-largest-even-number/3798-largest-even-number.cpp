class Solution {
public:
    string largestEven(string s) {
        if((s[s.size()-1] - '0') == 2)
        return s;
        int idx;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i] == '2'){
                idx=i;
                break;
            }
        }
        s=s.substr(0,idx+1);
        return s;
    }
};