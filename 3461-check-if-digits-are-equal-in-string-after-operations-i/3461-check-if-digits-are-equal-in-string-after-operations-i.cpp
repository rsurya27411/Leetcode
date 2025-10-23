class Solution {
public:
string compress(string str){
    string s="";
    for(int i=0;i<str.size()-1;i++){
        cout<<(str[i+1]-'0')<<endl;
        int a = (str[i]-'0' + str[i+1]-'0')%10;
        s+=to_string(a);
    }
    //cout<<s<<endl;
    return s;
}
    bool hasSameDigits(string s) {
       if(s.size() == 2){
        if(s[0] == s[1])
        return 1;
        return 0;
       }
       return hasSameDigits(compress(s));
    }
};