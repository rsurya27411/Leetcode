class Solution {
public:
    int isPrefixOfWord(string sen, string seaWord) {
        sen=" "+sen;
        int c=1;
        for(int i=0;i<sen.size();i++)
        {
            if(sen[i]==' ' && sen.substr(i+1,seaWord.size()) == seaWord)
            {cout<<sen.substr(i+1,seaWord.size())<<i<<endl;
            return c;}
            else if(sen[i]==' ')
            c++;
        }
        return -1;
    }
};