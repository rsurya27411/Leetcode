class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int c=0,ans=INT_MIN;
        for(int i=0;i<sentences.size();i++)
        {
            c=0;
            for(int j=0;j<sentences[i].size();j++)
            {
                if(sentences[i][j]==' ')
                c++;
            }
            ans=max(ans,c+1);
        }
        return ans;
    }
};