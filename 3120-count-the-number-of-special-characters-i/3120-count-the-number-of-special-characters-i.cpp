class Solution {
public:
    int numberOfSpecialChars(string word) {
        sort(word.begin(),word.end());
        int c=0;
        for(int i=0;i<word.size();i++){
            if((int)word[i] >= 97 && (int)word[i] <=122)
            break;
            if(word[i] != word[i+1]){
                if(word.find(tolower(word[i])) != string::npos)
                c++;
            }
        }
        return c;
    }
};