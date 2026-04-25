class Solution {
public:
    int compress(vector<char>& chars) {
        int i=0,j=1,c=1;
        string str="";
        while(j<chars.size()){
            if(chars[i] == chars[j]) c++;
            else{
                str+=chars[i];
                if(c!=1)
                str+=to_string(c);
                i=j;
                c=1;
            }
            j++;
        }
        str+=chars[i];
        if(c!=1)
        str+=to_string(c);
        int k=0;
        while(k<str.size())
        {
            chars[k]=str[k];
            k++;
        }
        return str.size();
    }
};