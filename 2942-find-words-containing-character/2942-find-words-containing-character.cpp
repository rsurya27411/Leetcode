class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
    int i,n=words.size();
        vector<int> ans;
    for(i=0;i<n;i++)
       {
if(words[i].find(x)!=string::npos)
     ans.push_back(i);
    }
       return ans;
    }
};