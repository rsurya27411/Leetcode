class Solution {
public:
    long long minimumSteps(string s) {
        long long c=0,ans=0;
        for(int i=0;i<s.size();i++){
            if(s[i] == '0')
            ans+=c;
            else
            c++;
        }
        return ans;
    }
};