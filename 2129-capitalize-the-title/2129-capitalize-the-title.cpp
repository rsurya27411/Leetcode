class Solution {
public:
    string capitalizeTitle(string title) {
        title+=" ";
        string str="",ans="";
        for(int i=0;i<title.size();i++){
            if(title[i] == ' '){

                cout<<str<<endl;

                if(str.size() == 1)
                ans.push_back(tolower(str[0]));

                if(str.size() == 2){
                ans.push_back((char)tolower(str[0]));
                ans.push_back((char)tolower(str[1]));}

                else if(str.size() > 2){
                    ans+=toupper(str[0]);
                    for(int i=1;i<str.size();i++)
                    ans+=tolower(str[i]);
                }
            str="";
            ans+=" ";
            }
            else
            str+=title[i];
        }
        title=ans.substr(0,ans.size()-1);
        return title;
    }
};