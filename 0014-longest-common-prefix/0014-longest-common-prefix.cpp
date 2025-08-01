class Solution {
public:
    string samewords(string str1,string str2){
        string st="";
        for(int i=0;i<max(str1.size(),str2.size());i++){
            if(str1[i] == str2[i])
            st+=str1[i];
            else
            break;
        }
        return st;
    }
    string longestCommonPrefix(vector<string>& strs) {
    string st=strs[0];
    for(int i=1;i<strs.size();i++){
        st=samewords(st,strs[i]);
        if(st == "")
        return "";
    }
    return st;
    }
};