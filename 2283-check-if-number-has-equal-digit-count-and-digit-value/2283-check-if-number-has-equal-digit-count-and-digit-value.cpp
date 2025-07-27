class Solution {
public:
    bool digitCount(string num) {
        map<int,int> m;
        for(int i=0;i<num.size();i++)
        m[num[i]-'0']++;
        for(int i=0;i<num.size();i++)
        {
            if((num[i]-'0') != m[i])
            return false;
        }
    return true;
    }
};