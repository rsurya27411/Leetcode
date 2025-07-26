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
        for(int i=0;i<chars.size();i++)
        {
            chars[i]=str[i];
        }
        cout<<str;
        return str.size();
    }
};