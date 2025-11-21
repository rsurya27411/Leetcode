class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        vector<int> ans;
        for(int i=0;i<tokens.size();i++){
            if(tokens[i] == "+"){
                int a = ans[ans.size()-2] + ans[ans.size()-1];
                ans.pop_back();
                ans.pop_back();
                ans.push_back(a);
                cout<<a<<endl;
            }
            if(tokens[i] == "-"){
                int a = ans[ans.size()-2] - ans[ans.size()-1];
                ans.pop_back();
                ans.pop_back();
                ans.push_back(a);
                cout<<a<<endl;
            }
            if(tokens[i] == "/"){
                int a = ans[ans.size()-2] / ans[ans.size()-1];
                ans.pop_back();
                ans.pop_back();
                ans.push_back(a);
                cout<<a<<endl;
            }
            if(tokens[i] == "*"){
                int a = ans[ans.size()-2] * ans[ans.size()-1];
                ans.pop_back();
                ans.pop_back();
                ans.push_back(a);
                cout<<a<<endl;
            }
            if(tokens[i] != "+" && tokens[i] != "*" && tokens[i] != "/" && tokens[i] != "-")
            ans.push_back(stoi(tokens[i]));
        }
        return ans[0];
    }
};