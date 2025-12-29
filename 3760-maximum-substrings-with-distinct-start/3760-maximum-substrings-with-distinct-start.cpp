class Solution {
public:
    int maxDistinct(string s) {
        vector<int> freq(26,0);
        for(int i=0;i<s.size();i++){
            if(freq[s[i]-'a'] == 0)
            c++;
            freq[s[i] - 'a']++;
        }
        int c=0;
        for(auto it:freq)
        if(it == 1)
        c++;
        return c;
    }
};