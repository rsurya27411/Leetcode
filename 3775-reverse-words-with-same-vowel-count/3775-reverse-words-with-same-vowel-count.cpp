class Solution {
public:
    string reverseWords(string s) {
        s+=" ";
        int C=0,i=0;
        string vowels="aeiou";
        while(s[i] != ' '){
            if(vowels.find(s[i]) != string::npos)
            C++;
            i++;
        }
        //cout<<C;
        int c=0;
        for(int j=i+1;j<s.size();j++){
            if(vowels.find(s[j]) != string::npos)
            c++;
            if(s[j] == ' '){
                cout<<c<<endl;
                if(C == c){
                    reverse(s.begin()+i,s.begin()+j+1);
                }
                i=j;
                c=0;
            }
        }
        s=s.substr(0,s.size()-1);
        return s;
    }
};