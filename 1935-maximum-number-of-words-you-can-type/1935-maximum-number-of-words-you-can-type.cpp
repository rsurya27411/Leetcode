class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        vector<int> freq(26,0);
        for(int i=0;i<brokenLetters.size();i++)
        freq[brokenLetters[i]-'a']++;
        text+=" ";
        bool flag=true;int c=0;
        for(int i=0;i<text.size();i++){
            if(text[i] == ' '){
                if(flag == true)
                c++;
                else
                flag=true;
                continue;
            }
            char ch=text[i];
            if(freq[ch - 'a'] != 0)
            flag=false;
        }
        return c;
    }
};