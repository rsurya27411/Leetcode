class Solution {
public:
    vector<string> createGrid(int m, int n) {
        string str1=".",str2=".";
        vector<string> ans;
        for(int i=0;i<n-1;i++){
            str1+='#';
            str2+='.';
        }
        cout<<str1<<" "<<str2;
        for(int i=0;i<m-1;i++){
            ans.push_back(str1);
        }
        ans.push_back(str2);
        return ans;
    }
};