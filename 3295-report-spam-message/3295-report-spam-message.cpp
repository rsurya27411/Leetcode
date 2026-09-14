class Solution {
public:
    bool reportSpam(vector<string>& message, vector<string>& bannedWords) {
        //unordered_set<string> s(message.begin(),message.end());
        unordered_set<string> b(bannedWords.begin(),bannedWords.end());
        int c=0;
        for(int i=0;i<message.size();i++){
            if(b.find(message[i]) != b.end())
            c++;
        }
        cout<<c;
        return c>=2;
    }
};