class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        map<string,string> mp;
        string str="",wrd="";
        bool flag = false;
        for(int i=0;i<knowledge.size();i++)
        mp[knowledge[i][0]] = knowledge[i][1];

        for(int i=0;i<s.size();i++){
            if(s[i] == '('){
                flag=true;
                continue;
            }
            if(s[i] == ')'){
                auto it = mp.find(wrd);
                if(it != mp.end()){
                    str+=it->second;
                }
                else
                str+='?';
                flag = false;
                wrd="";
                continue;
            }
            if(flag == true){
                wrd+=s[i];
            }
            if(flag == false)
            str+=s[i];
        }
        return str;
    }
};